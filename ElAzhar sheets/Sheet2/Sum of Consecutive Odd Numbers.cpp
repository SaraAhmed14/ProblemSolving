#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{ 
    int t, u,x ,y, n,sum=0;
cin >> n;
for (size_t i = 0; i <n; i++)
{
	cin >> t >> u;
	x = min(t, u);
	y = max(t, u);
	if (x % 2 != 0)
	{
		x += 2;
	}
	else
	{
		x += 1;
	}
	for (size_t i = x; i < y; i += 2)
	{
		sum += i;
	}
	cout << sum << endl;
	sum = 0;

}
}