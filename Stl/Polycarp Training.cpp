#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define en endl

int main()
{
int n;
	cin >> n;
	vector<int>v(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int x = 0;
	int p = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (v[i] >= p)
		{
			p++;
			x++;
		}


	}
	cout << x;

}