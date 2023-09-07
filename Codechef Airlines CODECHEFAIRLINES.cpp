#include <iostream>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        x = 10 * x;
        if(x >= y)
        {
            z = y * z;
            cout << z << endl;
        }
        else if(x < y)
        {
            x = x * z;
            cout << x << endl;
        }
    }
    return 0;
}
