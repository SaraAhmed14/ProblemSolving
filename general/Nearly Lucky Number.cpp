#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main() {
	string x;
	cin >> x;
	int counter = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '4' || x[i] == '7')
			counter++;
			
	}

	if (counter == 4 || counter == 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}