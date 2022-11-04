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
string  l = "that I love ";
string v = "that I hate ";
if (x == 1)
{
	cout << "I hate it";
}
else
{
	cout << "I hate ";
	for (size_t i = 2; i < x+1; i++)
	{
		if (i%2==0)
		{
			cout << l;
		}
		else
		{
			cout << v;
		}


	}
	cout << "it";
}

}