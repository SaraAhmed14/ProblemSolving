#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main() {
	int n; cin >> n;
	string s;
	while (true)
	{
		n++;
		s = to_string(n);
		set<char> c;
		for (int i = 0; i < 4; i++) c.insert(s[i]);
		if (c.size() == 4) { cout << n << endl; break; }
	}
}