#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main() {
	int y,u,n,c=0;
	cin >> y;
	for (size_t i = 0; i < y; i++)
	{
		cin >> u >> n;
		if (n - u >= 2)
			c++;
	}
	cout << c;
}