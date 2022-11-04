#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{  int x;
cin >> x;
for (size_t i = 1; i <=x; i++)
{
	if (x%i==0)
	{
		cout << i << endl;
	}
}
}