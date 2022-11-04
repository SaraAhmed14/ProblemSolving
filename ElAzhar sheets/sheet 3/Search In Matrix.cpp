#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
    int x, y,z;
cin >> x >> y ;
int arr[110][110];
for (int i = 1; i <=x; i++)
{
    for (int j = 1;j <=y; j++)
    {
        cin >> arr[i][j];
    }
}
cin >> z;
for (int i = 1; i <= x; i++)
{
    for (int j = 1;j <= y; j++)
    {

        if (arr[i][j] == z)
        {
            cout << "will not take number";
            return 0;
        }

    }
}
cout << "will take number";
}