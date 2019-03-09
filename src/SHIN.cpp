#include <iostream>
using namespace std;

int a[1000];
int d[1000];
int v[1000];


void go(int p)
{
	if(p == 0)
		return;
	else
	{
		go(v[p]);
		cout<<a[p]<<" ";
	}
}


int main()
{
	int n;
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}

	for(int i=1; i<=n; i++)
	{
		d[i] = 1;

		for(int j=1; j<=i; j++)
		{
			if(a[i]>a[j] && d[j]+1>d[i])
			{
				d[i] = d[j]+1;
				v[i] = j;
			}
		}
	}

	int ans = d[1];
	int p = 0;

	for(int i=1; i<=n; i++)
	{
		ans = max(ans, d[i]);
		p = i;
	}

	cout<<ans<<"\n";
	go(p);
}
