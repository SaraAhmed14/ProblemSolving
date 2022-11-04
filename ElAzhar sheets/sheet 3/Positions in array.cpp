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
    for (size_t i = 0; i < x; i++)
    {
        cin >> arr[i];
        if (arr[i]<=10)
        {
            cout << "A[" << i << "] " <<"= "<< arr[i]<<endl;
        }
    }
}