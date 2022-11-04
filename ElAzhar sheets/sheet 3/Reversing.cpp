#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
    int arr[100000];
    int x;
    cin >> x;
    for (int  i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = x-1; i >=0; i--)
    {
        cout << arr[i] <<" ";
    }
}