#include<iostream>
#include<stdlib.h>
using namespace std;
long int arr[100005];
void merge(long int *a,long int *l,long int nL,long int *r,long int nR)
{
    long int i=0,j=0,k=0;
    while(i < nL && j < nR)
    {
        if(l[i] < r[j])
            a[k++] = l[i++];
        else
            a[k++] = r[j++];
    }
    while(i < nL)
    {
        a[k++] = l[i++];
    }
    while(j < nR)
    {
        a[k++] = r[j++];
    }
}
void mergesort(long int *a,long int len)
{
    if(len<2)
        return;
    long int mid = len/2;
    long int *left = (long int *)malloc(mid*sizeof(long int));
    long int *right = (long int *)malloc(sizeof(long int)*(len-mid));
    for(long int i=0;i<mid;i++)
        left[i] = a[i];
    for(long int i=mid;i<len;i++)
        right[i-mid] = a[i];
    mergesort(left, mid);
    mergesort(right, len-mid);
    merge(a, left, mid, right, len-mid);
}

int main()
{
	long int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,n+1);
	long int price=0;
	long int count=0;
	for(int i=1;i<=n;i++)
	{
		if((price+arr[i])<=k)
		{
			price+=arr[i];
			count+=1;
		}
		else
		{
			break;
		}
	}
	cout<<count<<endl;
}