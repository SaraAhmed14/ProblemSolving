#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
//#include <regex>
int main()
{
vector<int> v(4);
for (int i = 0; i < 4; ++i) {
	cin >> v[i];
}
sort(v.begin(), v.end());
cout << v[3] - v[0] << " " << v[3] - v[1] << " " << v[3] - v[2] << endl;
}