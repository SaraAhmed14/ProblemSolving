#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
 
int main() {
string a, b;
cin >> a >> b;
reverse(a.begin(), a.end());
if (a==b)
{
	cout << "YES";
}
else
{
	cout << "NO";
}
}