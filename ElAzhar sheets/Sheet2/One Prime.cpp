#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int x, c = 0;
	cin >> x;
	if (x <= 1)
	{
		cout << "NO";

	}
	else
		for (size_t i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				c++;
				break;
			}
		}

	if (c > 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}