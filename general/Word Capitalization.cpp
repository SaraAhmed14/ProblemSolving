#include <iostream>
 
using namespace std;
 
int main()
{
   string x;
cin >> x;
if (isupper(x[0]))
{
    cout << x;
}
else
{
    x[0] = toupper(x[0]);
    cout << x;
}
  
}