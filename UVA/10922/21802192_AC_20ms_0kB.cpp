#include<iostream>
using namespace std;
int angka(string a)
{
    int jum=0;
	for(int i=0;i<a.length();i++)
    {
        jum=jum+(a[i]-48);
    }
	return jum;
}
int hitung(int n)
{
    int count=1;
	if(n%9==0)
    {
    while(n!=9 && n>9)
    {
		int b=0;
        while(n!=0)
        {
            b=b+(n%10);
            n=n/10;
        }
        	n=b;
        	count++;
        }
        return count;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string x;
	while(cin>>x && x!="0")
    {
        int sum=angka(x);

        int hasil=hitung(sum);
        cout<<x;

        if(hasil==-1)
        {
           cout<<" is not a multiple of 9."<<endl;
        }
        else if(x=="9")
        {
            cout<<" is a multiple of 9 and has 9-degree 1."<<endl;
        }
        else
        {
        	cout<<" is a multiple of 9 and has 9-degree "<<hasil<<"."<<endl;
        }
    }
	return 0;
}