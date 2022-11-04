#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl

int main() {
	int k, r;
	cin >> k >> r;
    int counter = 0;

	for (int i = 1; i > 0; i ++) {
		if ((k * i) % 10 == 0 || ((k * i) % 10 == r))
		{
			counter++; break;
		}
		else counter++;

    }

    cout << counter;
}