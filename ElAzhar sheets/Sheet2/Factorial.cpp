#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int x, y;
	long long sum = 1;
	cin >> y;
	while (y--)
	{

		cin >> x;
		for (size_t i = 1; i < x; i++)
		{
			sum += sum * i;
		}
		cout << sum << endl;
		sum = 1;

	}
}