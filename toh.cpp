# pepcoding#include<bits/stdc++.h>
using namespace std;

void toh(int n, char src, char helper, char dest)
{
	if (n == 0)
	{
		return;
	}
	toh(n - 1, src, dest, helper);
	cout << "move disk " << n << " from " << src << " to " << dest << endl;
	toh(n - 1, helper, src, dest);
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	int n = 3;
	toh(n, 'A', 'B', 'C');
}
