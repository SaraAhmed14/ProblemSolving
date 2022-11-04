#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
int x,sum1=0,sum2=0;
cin >> x ;
int arr[110][110];
for (int i = 1; i <=x; i++)
{
    for (int j = 1;j <=x; j++)
    {
        cin >> arr[i][j];
        if (j == i)
        {
            sum1 += arr[i][j];
        }
    }
}
int s = x;
int y = 1;
while (s >= 1 && y <= x)
{
    sum2 += arr[s][y];
    y++;
    s--;
}
cout << abs(sum1-sum2);
}