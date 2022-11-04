#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int  a, b, c;
	cin >> a >> b >> c;
	int sum1 = 0, sum2 = 0;
	int i = 1;
	for (int i = 0; i <= a; i++)
	{
		int x = i;
		while (x)
		{
			sum1 = sum1 + (x % 10);
			x /= 10;
		}
		if (sum1 >= b && sum1 <= c)
		{
			sum2 += i;

		}
		sum1 = 0;
	}
	cout << sum2;
}