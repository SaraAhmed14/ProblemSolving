#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v;
        if (v.length() <= 10)
        {
            cout << v <<endl;
        }
        else
        {
 
            cout << v[0] << v.length()-2 << v.back()<<endl;
        }
    }
    return 0;
}