#include<bits/stdc++.h>
using namespace std;
double n[10000];
double m[10000];
int main()
{
	double t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n[i]>>m[i];
	}
	for(int i=1;i<=t;i++)
	{
		double a=(n[i]-2)/3;
		double b=(m[i]-2)/3;
		long int hasil=ceil(a)*ceil(b);
		cout<<hasil<<endl;
	}
	return 0;
}