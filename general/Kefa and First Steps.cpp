#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>


int main()
{
    int n;
cin >> n;
vector<long long> v(n);
for (int i = 0; i < n; i++) cin >> v[i];

if (n == 1) cout << 1 << endl;
else
{


	int mx = 1, counter = 1;
	for (int i = 1; i < n; i++)
	{
		if (v[i] >= v[i - 1])  counter++, mx = max(counter, mx);
		else
		{
			counter = 1;
		}
	}

	cout << mx << endl;
}
}