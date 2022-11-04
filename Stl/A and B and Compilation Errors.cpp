#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
//#include <regex>
int main()
{
    int s1 = 0, s2 = 0, s3 = 0;int x, u;;
cin >> x;

for (size_t i = 0; i < x; i++)
{
	cin >> u;
	s1+= u;

}
for (size_t i = 0; i < x-1; i++)
{
	cin >> u;
	s2+=u;

}
cout << s1 - s2<<endl;
for (size_t i = 0; i < x-2; i++)
{
	cin >> u;
	s3 += u;

}
cout << s2 - s3<<endl;
}