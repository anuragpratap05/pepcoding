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


void stairpaths(int n, string path)
{

	if (n == 0)
	{
		cout << path << " ";
		return;
	}
	if (n < 0)
	{
		return;
	}
	stairpaths(n - 1, path + "1");
	stairpaths(n - 2, path + "2");
	stairpaths(n - 3, path + "3");

}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stairpaths(4, "");
}
