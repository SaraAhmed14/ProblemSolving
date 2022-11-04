#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	string x,y;
	int f = 1;
	cin >> x >> y;
	int c = x.size();
	int v = y.size();
	for (size_t i = 0; i <min(c,v) ; i++)
	{
		if (x[i]<y[i])
		{
			cout << x;
			f = 1;
			break;
		}
		else if (x[i] > y[i])
		{
			cout << y;
			f = 1;
			break;
		
		}
		else
		{
			f = -1;
		}
	}
	if (f==-1)
	{

		if (c>v)
		{
			cout << y;
		}
		else
		{
			cout << x;
		}
	}




}