# pepcoding#include<bits/stdc++.h>
using namespace std;



vector<string> stairpath(int n)
{

	if (n == 0)
	{
		vector<string> sv;
		sv.push_back("");
		return sv;
	}

	if (n < 0)
	{
		vector<string> sv;
		//sv.push_back("");
		return sv;
	}
	vector<string > path1 = stairpath(n - 1);
	vector<string > path2 = stairpath(n - 2);
	vector<string > path3 = stairpath(n - 3);
	vector<string> final;
	for (auto paths1 : path1)
	{
		final.push_back("1" + paths1);
	}
	for (auto paths2 : path2)
	{
		final.push_back("2" + paths2);
	}
	for (auto paths3 : path3)
	{
		final.push_back("3" + paths3);
	}







	return final;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	//string s = "678";
	vector<string> v = stairpath(4);
	for (string z : v)
	{
		cout << z << " ";
	}
}
