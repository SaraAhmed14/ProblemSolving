#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        string X1 = "X++", X2 = "++X", X3 = "--X", X4 = "X--";
        string statement;
        cin >> statement;
        if (statement == X1 || statement == X2)
        {
            res++;
        }
        if (statement == X3 || statement == X4)
        {
            res--;
        }
    }
    cout << res << endl;

    return 0;
}