#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>


int main()
{
    string c;
cin >> c;
int v = 0;
for (size_t i = 0; i < c.length(); i++)
{
	if (c[i]=='H'|| c[i] == 'Q'|| c[i] == '9')
	{
		v += 1;
	}
	
}
if (v >= 1)
{
	cout << "YES";

}
else
{
	cout << "NO";
}
}