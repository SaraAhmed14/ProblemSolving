#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
      int arr[1000000];
    int x, mn = 0, mx = 0;
    cin >> x;
    cin >> arr[0];
    int min = arr[0];
    int max = arr[0];
    for (size_t i = 1; i < x; i++)
    {
        cin >> arr[i];
        if (min > arr[i])
        {
            min = arr[i];
            mn = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            mx = i;
        }
    }
   
    arr[mn] = max;
    arr[mx] = min;

    for (size_t i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}