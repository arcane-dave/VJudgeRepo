#include<bits/stdc++.h>
using namespace std;
int n, l, p;
struct node
{
    int dis;
    int fuel;
	bool operator < (const node &x) const 
	{
		return dis < x.dis;
	}
}ps[10001];

int r, heap[10001];

bool cmp(int a,int b)
{
	return ps[a].fuel < ps[b].fuel;
}

int main()
{
	int t;
	cin>>t;
	for(int a=1;a<=t;a++)
	{
	
	int i, j, cnt;

	cin>>n;
	for(i = 0; i < n; i++)
	{
		cin>>ps[i].dis>>ps[i].fuel;
	}
	cin>>l>>p;
	r = 0;
	for(i = 0; i < n; i++)
	{
		ps[i].dis = l-ps[i].dis;
	}
	sort(ps,ps+n);
	cnt = 0;
	for(i = 0; i < n; i++)
	{
		j = i;
		while(j<n&&ps[j].dis <= p)
		{
			heap[r++] = j++;
			push_heap(heap,heap+r,cmp);
		}
		i = j-1;
		if(p >= l)
			break;
		else
		{
			if(r > 0)
			{
				p += ps[heap[0]].fuel;
				cnt++;
				pop_heap(heap,heap+r,cmp);
				r--;
			}
			else
				break;
		}
	}
	if(p < l)
		cnt = -1;
	cout<<cnt<<endl;
}
    return 0;
}
