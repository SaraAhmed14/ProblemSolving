#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	int x,f=1;string v;
	cin >> v;
	x = v.size()-1;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == v[x])
		{
			x--;
		}
			
		else
		{
			cout << "NO";
			f = 0;
			break;
		}
	}
	if (f==1)
	{
		cout << "YES";
	}
	

	
	



}