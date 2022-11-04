#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
    int x,s=0,l=0;
cin >> x;
int arr[100000];
for (size_t i = 0; i < x; i++)
{
    cin >> arr[i];
   
   
}
   while (true)
    {

        for (size_t i = 0; i < x; i++)
        {
            if (arr[i] % 2 == 0)
            {
                s++;
            }
            else
            {
                break;
            }

        }
        if (s == x)
        {
            l++;
            for (size_t i = 1; i <= x; i++)
            {
                arr[i] = arr[i] / 2;
            }
            s = 0;

        }

        else
        {
            break;
        }
    }


    cout << l;

}