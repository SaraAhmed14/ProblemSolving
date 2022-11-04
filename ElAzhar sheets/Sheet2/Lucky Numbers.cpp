#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{ 
    int a, b, c = 0, u;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		u= i;

		while (u% 10 == 4 || u % 10 == 7)
		{

			u = u / 10;

		}
		if (u == 0)
		{
			cout << i << " ";
			c++;
		}
	}

	if (c == 0)
		cout << "-1";

}