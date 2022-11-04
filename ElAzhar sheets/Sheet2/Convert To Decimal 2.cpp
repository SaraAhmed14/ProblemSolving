#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{ 
int v;
cin >> v;
while (v--)
{
	int x;
	cin >> x;
	int sum = 0, c = 0;
	while (x != 0)
	{
		if (x % 2 != 0)
		{
			c++;
		}
		x = x / 2;
	}
	for (size_t i = 0; i < c; i++)
	{
		sum += pow(2, i);
	}
	cout << sum << endl;

}
}