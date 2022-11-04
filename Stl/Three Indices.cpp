#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
//#include <regex>
int main()
{
    int x,y;
cin >> x;
while (x--)
{
	bool flag = false;
	    cin >> y;
		vector<int >v(y);
		for (size_t i = 0; i < y; i++)
		{
			cin >> v[i];
		}
		for (size_t i = 1; i <y-1; i++)
		{
			if (v[i-1] < v[i] && v[i] > v[i + 1])
			{
				cout << "YES" << endl;
				cout << i  << " " << i+1 << " " << i + 2 << endl;
				flag = true;
				break;
				
			}
			
			
		}
		if (flag == false)
		{
			cout << "NO" << endl;
		}
		

		
}
}