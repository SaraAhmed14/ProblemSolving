#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

//#include <regex>



int main()
{
    	int x;
	cin>> x;
	if (x % 5 == 0)
		cout << x / 5;
	else
		cout << (x/5) + 1;
}