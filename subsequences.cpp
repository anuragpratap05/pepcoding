# pepcoding#include<bits/stdc++.h>
using namespace std;

vector<string> subs(string s)
{
	if (s.length() == 0)
	{
		vector<string> sa;
		sa.push_back("");
		return sa;
	}

	char ch = s[0];
	vector<string> rres = subs(s.substr(1));
	vector<string> final;

	for (auto x : rres)
	{
		final.push_back("" + x);
		final.push_back(ch + x);
	}
	return final;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	vector<string> v = subs("abc");

	for (auto z : v)
	{
		cout << z << " ";
	}
}
