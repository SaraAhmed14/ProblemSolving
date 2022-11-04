#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{

	int x,s,s1;
	cin >> x;
	string o, y;
	while (x--)
	{
		int f = 1, f1 = 1;
		cin >> o >> y;
		 s = o.size()-1;
		 s1 = y.size()-1;
		 int u = max(s, s1);
		for (size_t i = 0; i <= max(s, s1); i++)
		{
			if (s>=i&&f)
			{
				cout << o[i];
			}
			else
			{
				f = 0;
			}
			if(s1 >= i && f1)
			{
				cout << y[i];
			}
			else
			{
			f1 = 0;
			}


		}
		cout << endl;
		
	}







}