#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>

void print(int x)
{
	for (size_t i = 1; i <= x; i++)
	{
		if (i==x)
		{
			cout << i;
		}
		else {
			cout << i << " ";
		}
	}
}
int main()
{
	int x;
	cin >> x;
	print(x);

 
}