#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
//#include <regex>
int main()
{
int n; long long s;
cin >> s >> n;
vector<pair <int , int >> v(n);
for (int i = 0; i < n; i++)
{
	cin >> v[i].first >> v[i].second;
}
sort(v.begin(), v.end());
bool flag = true;
for (int i = 0; i < n; i++)
{
	if (v[i].first >= s) 
	{
	flag = false;
	break;
	}
	else s += v[i].second;
}
if (flag) cout << "YES" << endl;
else cout << "NO" << endl;
}