#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int x;
	cin >> x;
	for (size_t i = x; i >= 1; i--)
	{
		for (size_t j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}