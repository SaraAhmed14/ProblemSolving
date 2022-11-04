#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	string v;
	int f = 0;
	
	while (cin >> v)
	{
		reverse(v.begin(), v.end());
		if (f)
		{
			cout << " ";

		}
		f = 1;
		cout << v;
	}
	

	





}