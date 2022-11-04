#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{  
    int x, y,sum=0;
while (true)
{
	cin >> x >> y;
	
	if (x<=0||y<=0)
	{
		break;
	}
	else {
		for (int i = min(x, y); i <=max(x, y); i++)
		{
			cout << i << " ";
			sum += i;
		}
		cout << "sum ="<< sum<<endl;
		sum = 0;
	}
}
}