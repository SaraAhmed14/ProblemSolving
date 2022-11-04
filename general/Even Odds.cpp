#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

//#include <regex>



int main()
{
    long long x, y;
	cin >> x >> y;
	if (y<=(x+1)/2)
	{
		cout<<y*2-1;
	}
	else
	{
		cout << (y - (x +1)/ 2) * 2;
	}
    
    
}