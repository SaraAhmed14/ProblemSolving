#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define e endl
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << max({ (a + b) * c , a + (b * c), a * b * c, a * (b + c) , a + b + c }) << endl;
}