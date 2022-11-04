#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>





int main()
{
    int x, y, z,u=0;
	cin >> x >> y >> z;
	int v = 0;
	for (size_t i = 1; i <=z; i++)
	{
		u += (i * x);
	}
	if (u>y)
	{
		cout << u - y;
	}
	else
	{
		cout << 0;
	}
}