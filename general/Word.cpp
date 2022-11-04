#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
string x;
	cin >> x;
	int u = 0, l = 0;
	for (int i = 0; i < x.length(); i++)
	{
		if (isupper(x[i]))
		{
			u++;
		}
		else
		{
			l++;
		 }
	}
	if (l >= u)
	{
		for (size_t i = 0; i < x.length(); i++)
		{
			x [i]= tolower(x[i]);
		}
		cout << x;
	}
	else
	{
		for (size_t i = 0; i < x.length(); i++)
		{
			x [i]= toupper(x[i]);
		}
		cout << x;
	}
}