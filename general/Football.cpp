#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

//#include <regex>



int main()
{
    	string x;
	int v = 1;
	cin >> x;
	for (size_t i = 0; i < x.size(); i++)
	{
		if (x[i] == x[i + 1])
		{
			v++;
			if (v == 7)
			{
				cout << "YES";
				return 0;
			}
		}
		else
		{
			v = 1;
		}

	}
	cout << "NO";
}