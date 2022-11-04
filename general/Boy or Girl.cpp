#include <bits/stdc++.h>;
#include <iostream>
using namespace std;
#include <string>
int main()
{
	string c;
	cin >> c;
	int v = 0;
	sort(c.begin(), c.end());
	for (size_t i = 0; i < c.length(); i++)
	{
		if (c[i]!=c[i+1])
		{
			v += 1;
		}
 
	}
	if (v%2==0)
	{
		cout << "CHAT WITH HER!";
	}
	else
	{
		cout << "IGNORE HIM!";
	}
 
}