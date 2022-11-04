#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl
int main()
{
	int t;
	cin >> t;
	long long a, b;
	while (t--)
	{
		cin >> a >> b;
			if (a%b != 0)
			{
				cout << b - (a % b) << e;
			}
			else
			{
				cout << 0 << e;
			}
	}
}