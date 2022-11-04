#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
//#include <regex>
int main()
{
    string x, y, z, u;
int c = 0;
cin >> x >> y >> u;
z = x + y;
sort(z.begin(), z.end());
sort(u.begin(), u.end());
if (z.size()==u.size())
{
	for (size_t i = 0; i < u.size(); i++)
	{
		if (u[i]==z[i])
		{
			c++;
		}
		else 
		{
			cout << "NO";
			return 0; 
		}
	}
}
if (c==u.size())
{
	cout << "YES";

}
else
{
	cout << "NO";

}
}