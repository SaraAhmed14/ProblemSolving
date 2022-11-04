#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int y;
	long long x, d;
	cin >> y;
	for (size_t i = 0; i < y; i++)
	{
		cin >> x;
		if (x == 0) {
			cout << 0 << "\n";
		}
		else
		{
			while (x != 0)
			{

				d = x % 10;
				cout << d << " ";
				x = x / 10;
			}
			cout << endl;
		}

	}
}