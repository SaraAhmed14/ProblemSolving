#include <bits/stdc++.h>;
#include <iostream>
using namespace std;
#include <string>
int main()
{
int v;
	cin >> v;
	string x;
	cin >> x;
 
	int c = 0;
	for (size_t i = 0; i <x.length(); i++)
	{
		if (x[i]==x[i+1])
		{
			c += 1;
		}
		
	}
	cout << c;
 
}