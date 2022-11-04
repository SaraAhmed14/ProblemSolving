#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{ 
    int x;
cin >> x;
int a = 1;
for (size_t i = 1; i <=x; i++)
{
		for (size_t j=x; j >i;j--)
		{
			cout << " ";
		}	
		for (size_t k= 1; k <= a; k++)
		{
			cout << "*";
		}
		cout << endl;
		a += 2;
}
}