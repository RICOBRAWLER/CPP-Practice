#include <iostream>
using namespace std;


int a[10001];
int d[10001][2];


int main(void)
{
	int n;
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}

	for(int i=1; i<=n; i++)
	{
		d[i][0] = max(d[i-1][0], max(d[i-1][1], d[i-1][2]));
		d[i][1] = d[i-1][0] + a[i];
		d[i][2] = d[i-1][1] + a[i];
	}

	int ans = max(d[n][0], max(d[n][1], d[n][2]));

	cout<<ans;
}
