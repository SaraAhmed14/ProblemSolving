#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl

int main()
{
	vector<int>v(3);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << (v[2] - v[1]) + (v[1] - v[0]);
}