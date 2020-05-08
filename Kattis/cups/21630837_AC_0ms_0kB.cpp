#include<iostream>
using namespace std;
string arr[25];
string nama[25];
string banyak[25];
int nilai[25];
int to_int(string x)
{
	int hasil=0;
	int j=1;
	for(int i=x.size()-1;i>=0;i--)
	{
		int a=x[i]-'0';
		hasil+=a*j;
		j*=10;
	}
	return hasil;
}

int main()
{
	string b;
	getline(cin,b);
	int n;
	n= to_int(b);
	for(int i=1;i<=n;i++)
	{
		getline(cin,arr[i]);	
	}
	for(int i=1;i<=20;i++)
	{
		nama[i]="";
		banyak[i]="";
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<arr[i].length();j++)
		{
			if(arr[i][j]>=97 && arr[i][j]<=122)
			{
				nama[i]+=arr[i][j];
			}
			else if(arr[i][j]>=48 && arr[i][j]<=57)
			{
				banyak[i]+=arr[i][j];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		nilai[i]= to_int(banyak[i]);
	}
	
	for(int i=1;i<=n;i++)
	{
		if(arr[i][1]>=48 && arr[i][1]<=57)
		{
			nilai[i]/=2;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(nilai[j]<nilai[i])
			{
				swap(nilai[j],nilai[i]);
				swap(nama[j],nama[i]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<nama[i]<<endl;
	}
}