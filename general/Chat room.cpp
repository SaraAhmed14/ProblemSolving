#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
 
int main() {
    
    string v = "hello";
	string y;
	cin >> y;
	int u = 0; 
 
	for (size_t i = 0; i < y.size(); i++)
	{
		if (v[u] == y[i])
		{
			u++;
		}
	}
	if (u==5)
	{
		cout << "YES";
 
 
	}
	else
	{
		cout << "NO";
	
	}
}