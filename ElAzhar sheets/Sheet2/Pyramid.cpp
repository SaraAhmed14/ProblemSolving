#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
int x;
cin >> x;
for (size_t i = 1; i <= x; i++)
{
	for (size_t j = 1; j <=i; j++)
	{
		cout << "*";
	}
cout << endl;
}
}