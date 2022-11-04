#include <unordered_set>
#include <unordered_map>
using namespace std;
#include <bits/stdc++.h>
int main() {
	int n;
	cin >> n;
	int x, y;
	int total = 0;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		total = total - x + y;
		vec.push_back(total);
	}
	cout<< *max_element(vec.begin(), vec.end());
}