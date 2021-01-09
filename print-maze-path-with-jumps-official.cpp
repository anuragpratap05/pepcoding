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


void printmazepaths(int sr, int sc, int dr, int dc, string path)
{

	if (sr == dr and sc == dc)
	{
		cout << path << " ";
	}

	for (int jumpc = 1; jumpc <= dc - sc; jumpc++)
	{
		printmazepaths(sr, sc + jumpc, dr, dc, path  + "h" + to_string(jumpc) );
	}

	for (int jumpr = 1; jumpr <= dr - sr; jumpr++)
	{
		printmazepaths(sr + jumpr, sc, dr, dc,  path + "v" + to_string(jumpr) );
	}

	for (int jumpd = 1; jumpd <= dr - sr and jumpd <= dc - sc; jumpd++)
	{
		printmazepaths(sr + jumpd, sc + jumpd, dr, dc,  path + "d" + to_string(jumpd));
	}


}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	printmazepaths(1, 1, 3, 3, "");
}
