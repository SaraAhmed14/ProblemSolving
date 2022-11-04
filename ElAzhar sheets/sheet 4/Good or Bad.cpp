#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	int x;cin >> x;
	string v;
	while (x--)
	{
		int f = 1;
		cin >> v;
		for (size_t i = 0; i < v.size()-2; i++)
		{
			if ((v[i] == '0' && v[i + 1] == '1' && v[i + 2] == '0') ||
				(v[i] == '1' && v[i + 1] == '0' && v[i + 2] == '1'))
			{
				f = 0;
				cout << "Good"<<endl;
				break;
			}

		}
		if (f)
		{
			cout << "Bad"<<endl;
		}
	}

	
	



}