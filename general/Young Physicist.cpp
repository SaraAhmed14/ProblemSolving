#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int a, a1 = 0, a2 = 0, a3 = 0;
    cin >> a;
    int arr[100][100];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        a1 += arr[i][0];
        a2 += arr[i][1];
        a3 += arr[i][2];
    }

    if (a1 == 0 && a2 == 0 && a3 == 0) {

        cout << "YES";
    }
        
    else {

        cout << "NO";
    }
        
}