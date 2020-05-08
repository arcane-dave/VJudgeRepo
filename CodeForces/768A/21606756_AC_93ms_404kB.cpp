#include<iostream>
#include<math.h>
using namespace std;
long int arr[100005];
int main()
{
	int n;
	cin>>n;
	long int terkecil=1000000000;
	long int terbesar=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		terkecil=min(terkecil,arr[i]);
		terbesar=max(terbesar,arr[i]);
	}
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]!=terkecil && arr[i]!=terbesar)
		{
			count+=1;
		}
	}
	cout<<count<<endl;
}
