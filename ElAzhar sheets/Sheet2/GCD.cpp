#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int x, y, max, gcd = 0;
	cin >> x >> y;
	if (x > y)
	{
		max = x;
	}
	else
	{
		max = y;
	}

	for (size_t i = 1; i <= max; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			gcd = i;
		}
	}
	cout << gcd;
}