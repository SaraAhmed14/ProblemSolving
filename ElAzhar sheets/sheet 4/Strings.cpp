#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	string s, c;
	cin >> s >> c;
	cout << s.size() << " " << c.size() << endl;
	string h = s + c;
	cout << h << endl;
	char u = s[0],v=c[0];
	s[0] = v;
	c[0] = u;
	cout << s << " " << c<<endl;




}