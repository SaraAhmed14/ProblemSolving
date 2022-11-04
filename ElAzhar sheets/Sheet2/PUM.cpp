#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{ 
int x;
cin >> x;
int c = 1;
for (size_t k = 1; k <=x; k++)
{
	for (size_t i = c; i <(c+3); i++)
	{
		cout << i <<" ";
	}
	cout << "PUM" << endl;
	c+= 4;


}
}