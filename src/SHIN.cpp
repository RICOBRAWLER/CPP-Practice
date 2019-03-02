#include <iostream>
#include <algorithm>
using namespace std;


int a[10] = {30, 40, 50, 80};


int main(void)
{
	int ans = *max_element(a, a+4);

	cout<<ans;
}
