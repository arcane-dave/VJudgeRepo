#include <iostream>
#include <math.h>
using namespace std;
int arr[500005];
int main()
{
    int n,b;
    while(true)
	{
        cin>>n>>b;
        if(n == -1)
        {
        	break;
		}
        int lo = 1,hi = 0,mi;
        for(int i = 0;i < n;++i)
		{
    		cin>>arr[i];
            hi = max(hi,arr[i]);
        }
        while(lo < hi)
		{
            mi = (lo + hi) >> 1;
            
            int cont = 0;
            
            for(int i = 0;i < n;++i)
                cont += (arr[i] + mi - 1) / mi;
            
            if(cont > b) lo = mi + 1;
            else hi = mi;
        }
        
        cout<<lo<<endl;
    }
    
    return 0;
}
