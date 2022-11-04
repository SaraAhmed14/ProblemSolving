#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a , b, c;
    int s = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a+b+c>=2)
        {
            s += 1;
        }
    }
    cout << s;
  
}