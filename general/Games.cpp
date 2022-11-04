#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

//#include <regex>



int main()
{
    int n;
int v = 0;
cin >> n;
int h[100], a[100];

for (int i = 0; i < n; i++)
{
	cin >> h[i] >> a[i];
}

for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		if (h[i] == a[j])
		{
			v++;
		}
	}
}
cout << v;
}