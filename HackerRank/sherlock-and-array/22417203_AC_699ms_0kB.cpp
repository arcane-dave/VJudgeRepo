#include<bits/stdc++.h>
using namespace std;
int kanan[100005];
int kiri[100005];
int data[100005];
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		for(int i=0;i<=100000;i++)
		{
			kanan[i]=0;
			kiri[i]=0;
			data[i]=0;
		}
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>data[i];
		}
		for(int i=1;i<=n;i++)
		{
			kiri[i]=kiri[i-1]+data[i];
		}
		for(int i=n;i>=1;i--)
		{
			kanan[i]=kanan[i+1]+data[i];
		}
		bool ada=false;
		for(int i=1;i<=n;i++)
		{
			if(kiri[i-1]==kanan[i+1])
			{
				ada=true;
			}
		}
		if(ada)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}