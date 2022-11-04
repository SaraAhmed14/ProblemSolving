#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
	string v;
	cin >>v;
	for (size_t i = 0; i < v.size(); i++)
	{
		if ( v[i]==',')
		{
			cout << " ";
		}
		else if (v[i]>='a'&&v[i]<='z')
		{
			int a = v[i] - 32;
			char c = a;
			cout << c;
		}
		else
		{
			int a = v[i] +32;
			char c = a;
			cout << c;
		}
	}

	
	



}