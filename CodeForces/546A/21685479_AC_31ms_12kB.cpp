#include<iostream>
using namespace std;
int main()
{
	long long k,n,w;
	cin>>k>>n>>w;
	long long price;
	price= (w*((2*k)+((w-1)*k))/2);
	if((price-n)>0)
	{
		cout<<price-n<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
}