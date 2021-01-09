# pepcoding#include<bits/stdc++.h>
using namespace std;


void print_permutations(string s, string psf)
{
	if (s.length() == 0)
	{
		cout << psf << " ";
		return;
	}

	for (int i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		string lp = s.substr(0, i);
		string rp = s.substr(i + 1);

		string ros = lp + rp;
		print_permutations(ros, ch + psf);
	}
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	print_permutations("abc", "");
}
