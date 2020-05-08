#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    long long m=pow(10,9)+7;
    while(t--) 
	{
        long long p=1;
        cin>>n;
        for(int i=1; i<=n; i++) 
		{
            p = ((p%m)*(i%m))%m;
        }
        cout<<p<<endl;
    }
    return 0;
}