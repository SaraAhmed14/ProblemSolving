#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>

int main()
{
    int x, y, u, v, p = 1,s=0;
    cin >> x >> y;
    char arr[110][110];
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1;j <= y; j++)
        {
            cin >> arr[i][j];
        }
    }

    int m = 0, n = 0;
    cin >> u >> v;
   
    if (u==x)
    {
        m == u;
        n = v + 1;
    }
    else if (v==y)
    {
        n == v;
        m = u + 1;
    }
    if (u == x && v == y)
    {

        m == u;
        n == v;
    }
    else
    {
        m = u + 1;
        n = v + 1;
    }
        for (int k = (u-1);k <= m ; k++)
        {
            for (int l = (v-1); l <= n; l++)
            {
                if (k==0||l==0)
                {
                    k == 1;
                    l == 1;
                }
                else if (k==u&&l==v)
                {
                    p = 0;

                }
                else if (arr[k][l]=='x')
                    {
                        s++;
                    }
                else
                {
                    cout << "no";
                    return 0;
                }
              

            }
        }
        cout << "yes" << endl ;
       
}