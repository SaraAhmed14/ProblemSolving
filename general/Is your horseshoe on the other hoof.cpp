#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>


int main()
{
int x;
set<int> s;
for (size_t i = 0; i < 4; i++)
{
	cin >> x;
	s.insert(x);

}
cout << 4 - s.size();
    
    
}