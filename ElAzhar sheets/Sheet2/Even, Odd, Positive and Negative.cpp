#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int n = 0, p = 0, e = 0, o = 0;
	int x, y;
	cin >> x;
	for (size_t i = 0; i < x; i++)
	{
		cin >> y;

		if (y > 0)
			p++;
		else if (y < 0)
			n++;
		if (y % 2 == 0)
			e++;
		else if (y % 2 != 0)
			o++;
	}
	cout << "Even: " << e << endl;
	cout << "Odd: " << o << endl;
	cout << "Positive: " << p << endl;
	cout << "Negative: " << n << endl;
}