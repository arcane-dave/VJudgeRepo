#include<iostream>
using namespace std;
int arr[1000];
bool pernah[1000];
int catat[1000];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=999;i++)
	{
		pernah[i]=false;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int pointer=0;
	for(int i=1;i<=n;i++)
	{
		if(pointer<k)
		{
			if(pernah[arr[i]]==false)
			{
				pointer+=1;
				catat[pointer]=i;
				pernah[arr[i]]=true;
			}
		}
		else
		break;
	}
	if(pointer<k)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		for(int i=1;i<=k;i++)
		{
			cout<<catat[i];
			if(i!=k)
			cout<<" ";
		}
		cout<<endl;
	}
}