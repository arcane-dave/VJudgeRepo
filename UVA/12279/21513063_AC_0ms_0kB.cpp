#include<iostream>
using namespace std;
int arr[10000];
int main()
{
	int n;
	int count=0;
	while(cin>>n)
	{
		count+=1;
		if(n!=0)
		{
			int a=0,b=0;
			for(int i=1;i<=n;i++)
			{
				cin>>arr[i];
			}
			for(int i=1;i<=n;i++)
			{
				if(arr[i]!=0)
				{
					a+=1;
				}
				else
				{
					b+=1;
				}
			}
			cout<<"Case "<<count<<": "<<a-b<<endl;
		}
		else
		return 0;
	}
}
