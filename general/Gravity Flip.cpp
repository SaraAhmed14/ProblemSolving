#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>


int main()
{
 int x, y;
cin >> x;
vector <int> v;
for (size_t i = 0; i < x; i++)
{
	cin >> y;
	v.push_back(y);
}
sort(v.begin(), v.end());
for (size_t i = 0; i < v.size(); i++)
{
	cout << v[i]<<" ";
}
}