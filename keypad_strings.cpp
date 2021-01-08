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

vector<string> keypad(string s)
{

	if (s.length() == 0)
	{
		vector<string> sv;
		sv.push_back("");
		return sv;
	}
	char ch = s[0];
	vector<string> rres = keypad(s.substr(1));

	int idx = ch - '0';

	vector<string> final;
	for (int i = 0; i < codes[idx].length(); i++)
	{
		char curr_ch = codes[idx][i];
		for (auto x : rres)
		{
			final.push_back(x + curr_ch);
		}
	}

	return final;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	string s = "678";
	vector<string> v = keypad(s);
	for (string z : v)
	{
		cout << z << " ";
	}
}
