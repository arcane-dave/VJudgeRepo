#include<bits/stdc++.h>
using namespace std;
int awal[100005];
int akhir[100005];
void quickSort( int *arr, int kiri, int kanan)
{
	 int tmp,i=kiri,j=kanan;
	 int pivot=arr[(kiri+kanan)/2];
	while(i<=j)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<=j)
		{
			tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
			swap(awal[i],awal[j]);
			i++;
			j--;
		}
	}
	if(kiri<j)
	{
		quickSort(arr,kiri,j);
	}
	if(i<kanan)
	{
		quickSort(arr,i,kanan);
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>awal[i];
			cin>>akhir[i];
		}
		quickSort(akhir,1,n);

		int count=0;
		int end=0;
		for(int i=1;i<=n;i++)
		{
			if(awal[i]>=end)
			{
				count+=1;
				end=akhir[i];
			}
		}
		cout<<count<<endl;
	}
}