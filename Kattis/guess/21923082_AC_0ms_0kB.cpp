#include <iostream>
#include <strings.h>
using namespace std;
int main()
{
    int mulai=512;
	int tengah=512;
    string tinggi;
    cout <<"512"<<endl;
    cout.flush();
    for(int i=0;i<10;++i)
    {
		cin>>tinggi;
        if(tinggi[0]=='l')
        {
            mulai=mulai-(tengah/2);
            cout << mulai<<endl<<flush;
            tengah=tengah/2;
            if(tengah==1)
            {
                tengah=2;
            }

        }
        else if(tinggi[0]=='h')
        {
            mulai=mulai+(tengah/2);
            if(mulai>1000)
            {
                mulai=1000;
            }
            cout << mulai<<endl<<flush;
            tengah=tengah/2;
            if(tengah==1)
            {
                tengah=2;
            }
        }
        else
        {
            break;
        }
    }

}