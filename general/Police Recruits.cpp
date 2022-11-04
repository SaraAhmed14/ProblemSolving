#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

//#include <regex>



int main()
{
    	int x, y;
	cin >> x;
	int crime = 0, police = 0;
	for (size_t i = 0; i < x; i++)
	{
		cin >> y;
	if (y > 0)
	{
		police += y;
	}
	else  if (y < 0)
	{
		if (police > 0)
		{
			police --;
		}
		else
		{
			crime++;
		}
	}
    }
	cout << crime;
}