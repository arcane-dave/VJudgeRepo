#include<iostream>
#include<map>
#include<set>
using namespace std;
map<int,int> ma1,ma2;
typedef long long int lli;
set<int>s;
int n;
#define mod 1000000007
 int arr[1000000];
 #define debug 0
 void print()
 {
  for(int i=0;i<n;i++)
  cout<<ma2[arr[i]]<<" ";
 }
void read()
 {
    cin>>n;
 for(int i=0;i<n;i++)
      {
    cin>>arr[i];
    ma1[arr[i]]=i;
   }
   return ;  
 }

 void check(int num)
 {
  
            set<int>::iterator it;
             it=s.lower_bound(num);
              if(it==s.end())
            {
                   it--;
       ma2[num]=(2*ma2[*it]+1)%mod;
                   }
         else if(it==s.begin())
      {
              ma2[num]=(2*ma2[*it])%mod; 
       }
   
    else
    {
           set<int>::iterator it1;
            if(debug)
                        {
                        for(int kk=0;kk<n;kk++) cout<<arr[kk];
                         }
           it1=it;
           it1--;
           if(ma1[*it]>ma1[*it1])
           { 
                 ma2[num]=(2*ma2[*it])%mod;
       }
       else ma2[num]=(2*ma2[*it1]+1)%mod;
    }
    s.insert(num);
   }

int main()
{
 read();
 ma2[arr[0]]=1;
    s.insert(arr[0]);
 for(int i=1;i<n;i++)
  {
    int val=arr[i];
    check(val);
  }
  print();
  cout<<endl;
}
