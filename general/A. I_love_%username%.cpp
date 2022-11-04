#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl
int main()
{
	int n;
	
	int contest;
	cin >> n >> contest;
	int max = contest;
	int min = contest;
	int counter = 0;
	for (int i = 1; i < n; i++)
	{
		cin >> contest;
		if (contest > max) {
			max = contest;
			counter++;
		}
		else if (contest < min) {
			min = contest;
			counter++;
		}
	}
	cout << counter;
	
}