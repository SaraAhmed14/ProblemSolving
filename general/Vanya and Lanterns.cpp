#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl

int main()
{
	int n, l;
	cin >> n >> l;
	int a;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	double d = 0;
	for (int i = 0; i < n-1; i++)
	{
		d = max(d, (double)v[i + 1] - v[i]);
	}
	cout << fixed << setprecision(10);
	cout << max(d / 2.0, (double)max(v[0], l - v[n - 1])) << endl;
}