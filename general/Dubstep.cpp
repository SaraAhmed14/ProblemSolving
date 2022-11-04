#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>
int main()
{
    string s;
	cin>>s;
	while(s.find("WUB")+1)
		s.replace(s.find("WUB"),3," ");
	cout<<s;
    return 0;
}
