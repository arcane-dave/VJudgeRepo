 #include<iostream>
#include<math.h>
 using namespace std;
 char gambar[1005][1005];
 int c=3;
 void catat(int x,int y,int n)
 {
 	if(n==1)
 	{
 		gambar[x][y]='X';
 		 	}
 	else
 	{
 		int a=pow(c,n-2);
 		catat(x,y,n-1);
 		catat(x+(2*a),y,n-1);
 		catat(x+a,y+a,n-1);
 		catat(x,y+(2*a),n-1);
 		catat(x+(2*a),y+(2*a),n-1);
 	}
 }
 int main()
 {
 	int x;

 	while(cin>>x)
 	{
 		if(x==-1)
 		{
 			return 0;
 		}
 		else
 		{
 			for(int i=1;i<=1000;i++)
 			{
 				for(int j=1;j<=1000;j++)
 				{
 					gambar[i][j]=' ';
 				}
 			}
 			catat(1,1,x);
 			for(int i=1;i<=pow(c,x-1);i++)
 			{
 				for(int j=1;j<=pow(c,x-1);j++)
 				{
 					cout<<gambar[i][j];
 				}
 				cout<<endl;
 			}
 			cout<<"-"<<endl;
 		}
 	}
 }
