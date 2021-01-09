# pepcoding#include<bits/stdc++.h>
using namespace std;

static string codes[] = {
	".;",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tu",
	"vwx",
	"yz"
};

void subsequence(string s, string ans)
{

	if (s.length() == 0)
	{
		cout << ans << " ";
		return;
	}
	char ch = s[0];
	string ros = s.substr(1);
	int idx = ch - '0';
	for (int i = 0; i < codes[idx].length(); i++)
	{
		char cho = codes[idx][i];
		subsequence(ros, ans + cho);
	}
}


int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	subsequence("678", "");
}
