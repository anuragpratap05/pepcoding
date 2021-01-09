# pepcoding#include<bits/stdc++.h>
using namespace std;

void printss(string s, string ans)
{
	if (s.length() == 0)
	{
		cout << ans << " ";
		return;
	}
	char ch = s[0];
	string ros = s.substr(1);
	printss(ros, ans + ch);
	printss(ros, ans + "");
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	printss("abc", "");
}
