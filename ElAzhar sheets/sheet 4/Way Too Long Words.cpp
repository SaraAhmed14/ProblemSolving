#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	int x; string v;
	cin >>x;
		while (x--)
		{
			cin >> v;
			if (v.size()<=10)
			{
				cout <<v<<endl;
			}
			else
			{
				cout << v[0]<<v.size() - 2<<v.back()<<endl;
			}

		}

	
	



}