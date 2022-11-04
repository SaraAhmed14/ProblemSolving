#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
    int x, y;
    cin >> x >> y;
    long long arr[110][110];
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1;j <= y; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = y;j >= 1; j--)
        {
            cout << arr[i][j] << " \n"[j == 1];
        }
    }
}