#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
 
int main(){
int x, y;
	cin >> x >> y;
	if (y > 0)
	{
		for (size_t i = 0; i < y; i++)
		{
			if (x % 10 > 0)
				x--;
			else
				x = x / 10;
		}
 
	}
	cout << x;
}