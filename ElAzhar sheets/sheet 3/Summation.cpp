#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
  int arr[100000];
  int x; 
   long long sum1 = 0;
  cin >> x;
  for (size_t i = 0; i < x; i++)
  {
      cin >> arr[i];
      sum1+= arr[i];
  }
  cout << abs(sum1);
}