#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>


int main()
{
string x, y;
cin >> x >> y;
for (size_t i = 0; i < x.length(); i++)
{
	if (x[i]!=y[i])
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}

}
}