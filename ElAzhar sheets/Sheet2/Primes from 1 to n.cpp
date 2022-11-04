#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int v;
	cin >> v;
	for (size_t i = 2; i <= v; i++)
	{
		int  c = 0;
		for (size_t j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				c++;
				break;
			}
		}
		if (c == 0)
		{
			cout << i << " ";
		}
	}
}