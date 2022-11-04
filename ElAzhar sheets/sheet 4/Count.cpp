#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	string s;
	cin >> s;
	long long sum = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		sum +=s[i]-'0';
	}
	cout << sum;



}