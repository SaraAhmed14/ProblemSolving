#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
    int arr[1000000];
int x,c=0;
cin >> x;
cin >> arr[0];
int min = arr[0];
for (size_t i = 1; i < x; i++)
{
    cin >> arr[i];
    if (arr[i] < min)
    {
        min = arr[i];
      

    }
}
 for (int i = 0; i < x; i++)
    {
        if (arr[i]==min)
        {
            c++;
        }
    }
    if (c%2==0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }
}