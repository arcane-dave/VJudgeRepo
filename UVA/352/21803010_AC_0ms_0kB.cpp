#include<iostream>
#include<string>
using namespace std;
char arr[50][50];
bool pernah[50][50];
void catat(int a,int b)
{
	if(arr[a][b]=='1' && pernah[a][b]==false)
	{
		pernah[a][b]=true;
		catat(a+1,b);
		catat(a-1,b);
		catat(a,b-1);
		catat(a,b+1);
		catat(a+1,b+1);
		catat(a-1,b+1);
		catat(a-1,b-1);
		catat(a+1,b-1);
	}
}
int main()
{
	int n;
	int banyak=0;
	while(cin>>n)
	{
		banyak+=1;
		for(int i=0;i<=45;i++)
		{
			for(int j=0;j<=45;j++)
			{
				arr[i][j]='0';
			}
		}	
		for(int i=0;i<=45;i++)
		{
			for(int j=0;j<=45;j++)
			{
				pernah[i][j]=false;
			}
		}
		for(int i=1;i<=n;i++)
		{
			string x;
			cin>>x;
			for(int j=0;j<n;j++)
			{
				arr[i][j+1]=x[j];
			}
		}
		int count=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(arr[i][j]=='1' && pernah[i][j]==false)
				{
					catat(i,j);
					count+=1;
				}
			}
		}
		cout<<"Image number "<<banyak<<" contains "<<count<<" war eagles."<<endl;
	}
}