#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main() {
   int x, y,z,m;
	cin >> x >> y;
	z=x;
	for (size_t i = 0; i < x; i++)
	{
		cin >> m;
		if (m>y)
		{
			z += 1;
		}

	}
	cout << z;
	
    
    
    
    
    
}