#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	string x;
	getline(cin, x);
	for (size_t i = 0; i < x.size(); i++)
	{
		if (x[i] == '\\')
		{

			break;
		}
		cout << x[i];
	}





}