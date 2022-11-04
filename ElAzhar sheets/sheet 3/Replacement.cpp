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
      if (arr[i] > 0)
      {
          arr[i] = 1;
      }
      else if (arr[i] < 0)
      {
          arr[i] = 2;
      }
  }
  for (size_t i = 0; i < x; i++)
  {
      cout << arr[i]<<" ";
  }
}