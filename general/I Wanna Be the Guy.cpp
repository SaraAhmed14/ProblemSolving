#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>


int main()
{
    int x;
cin >> x;
set<int> s;
int v,u,p,l;
cin >> v;
for (size_t i = 0; i < v; i++)
{
	cin >> u;
	s.insert(u);
}
cin >> p;
for (size_t i = 0; i < p; i++)
{
	cin >> l;
	s.insert(l);
}
if (s.size()==x)
cout << "I become the guy." << endl;
else cout << "Oh, my keyboard!" << endl;
}