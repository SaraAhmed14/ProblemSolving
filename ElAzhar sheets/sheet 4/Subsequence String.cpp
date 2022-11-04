#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{

	string v, u = "hello";int c = 0;
	cin >> v;
	for (size_t i = 0; i < v.size(); i++)
	{
		if (v[i]==u[c])
		{
			c++;

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