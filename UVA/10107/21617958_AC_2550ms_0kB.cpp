#include<bits/stdc++.h>
using namespace std;  
long long arr[1000005];
void merge(long long *a, long long *l, long long nL, long long *r, long long nR)
{
    // int nL = sizeof(l)/sizeof(int);
    // int nR = sizeof(r)/sizeof(int);
    long long i=0,j=0,k=0;
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
void mergesort(long long *a, long long len)
{
    if(len<2)
        return;
    long long mid = len/2;
    long long *left = (long long *)malloc(mid*sizeof(long long));
    long long *right = (long long *)malloc(sizeof(long long)*(len-mid));
    for(long long i=0;i<mid;i++)
        left[i] = a[i];
    for(long long i=mid;i<len;i++)
        right[i-mid] = a[i];
    mergesort(left, mid);
    mergesort(right, len-mid);
    merge(a, left, mid, right, len-mid);
}

int main()  
{  
	long long count=0;
	long long x;
	while(cin>>x)
	{
		count+=1;
		arr[count-1]=x;
    	mergesort(arr, count);
		if(count%2==1)
		{
			cout<<arr[((count+1)/2)-1]<<endl;
		  }  
		  else
		  {
		  	cout<<(arr[(count/2)-1]+arr[(count/2)])/2<<endl;
		  }
	}
}