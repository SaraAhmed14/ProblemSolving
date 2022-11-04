#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
    int arr[100000];
    int x,v=0;
    cin >> x;
    cin >> arr[0];
     int min=arr[0];
    for (size_t i = 1; i < x; i++)
    {
        cin >> arr[i];
        if (arr[i]<min)
        {
            min = arr[i];
            v = i;
            
        }
     }
    cout << min <<" "<<(v+1);
}