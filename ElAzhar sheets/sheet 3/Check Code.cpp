#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
    int x, y,s=0;
string b;
cin >> x >> y;
int v = x + y;
cin >> b;
if (b[x]!='-')
{
    cout << "No";
}
else
{
    for (size_t i = 0; i <=v; i++)
    {
        if ((int)b[i]>=48&& (int)b[i]<=57)
        {
            s++;
        }
    }
    if (s == v)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
  
}

}