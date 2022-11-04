#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int x, y, o, max;
	cin >> x;
	cin >> y;
	max = y;

	for (size_t i = 1; i < x; i++)
	{
		cin >> o;
		if (o > max)
		{
			max = o;
		}

	}
	cout << max;

}
