#include<bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	int xnb2 = power(x, n / 2);
	int xn = xnb2 * xnb2;
	if (n % 2 != 0)
	{
		xn = x * xn;
	}
	return xn;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	int x, n;
	cin >> x >> n;
	cout << power(x, n);
}
