# pepcoding#include<bits/stdc++.h>
using namespace std;

vector<string> getmzepaths(int sr, int sc, int dr, int dc)
{

	if (sr == dr and sc == dc)
	{
		vector<string > bres;
		bres.push_back(" ");
		return bres;
	}

	vector<string> hpath;
	vector<string> vpath;

	if (sc < dc)
		hpath = getmzepaths(sr, sc + 1, dr, dc);
	if (sr < dr)
		vpath = getmzepaths(sr + 1, sc, dr, dc);

	vector<string> final;
	for (auto hpaths : hpath)
	{
		final.push_back("h" + hpaths);

	}

	for (auto vpaths : vpath)
	{
		final.push_back("v" + vpaths);
	}

	return final;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<string> v = getmzepaths(1, 1, 3, 3);

	for (auto z : v)
	{
		cout << z << " ";
	}
}
