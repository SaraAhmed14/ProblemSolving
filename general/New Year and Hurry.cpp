#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl

int main()
{
	int n, k;
	int sum = 0;
	int solved = 0;
	while (cin >> n >> k)
	{
		int r = 240 - k;
		for (int i = 1; i <= n; i++)
		{
			sum += 5 * i;
			if (sum > r)
				break;
			else
			{
				solved++;
			}

		}
		cout << solved;
	}
	return 0;
	
}