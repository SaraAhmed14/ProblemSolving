#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
    int x;
    cin >> x;
    int arr[100000];
    int arr1[10000];
    for (size_t i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < x; i++)
    {
        cin >> arr1[i];
    }
    sort(arr, arr + x);
    sort(arr1, arr1 + x);
    for (size_t i = 0; i < x; i++)
    {
        if (arr[i] != arr1[i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
}