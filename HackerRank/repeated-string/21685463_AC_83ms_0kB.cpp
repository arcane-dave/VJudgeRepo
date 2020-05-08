#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long n;
	cin>>n;
	long long count=0;
	for(long long i=0;i<s.length();i++)
	{
		if(s[i]=='a')
		{
			count+=1;
		}
	}
	long long sum=0;
	sum= count * (n/s.length());
	for(long long i=0;i<(n%s.length());i++)
	{
		if(s[i]=='a')
		{
			sum+=1;
		}
	}
	cout<<sum<<endl;
}