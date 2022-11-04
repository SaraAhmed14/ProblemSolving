#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
    int x;
	cin >> x;
	if (x==0||x==1)
	{
		cout << "-1";
	}
	else {
		int i = 2;
		while (i <= x) {
			cout << i << endl;
			i += 2;
		}
	}
}