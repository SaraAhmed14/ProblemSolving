#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v(m);
	int mn = 1001;
	for (int i = 0; i < m; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int l = 0, r = n - 1;
	for (int i = 0; i < m, r < m; i++)
	{
		mn = min(v[r++] - v[i], mn);
	}

	cout << mn << endl;
}