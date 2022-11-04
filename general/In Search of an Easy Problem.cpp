#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>


int main(){
    int x,u;
	cin >> x;
	int c = 0 ;
	for (size_t i = 0; i < x; i++)
	{
		cin >> u;
		if (u == 1)
			c++;
		
	}
	if (c>0)
	{
		cout<<"HARD";
	}
	else
	{
		cout << "EASY";
	}
    
    
}