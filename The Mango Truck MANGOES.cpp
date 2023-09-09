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
        int k = z - y;
        x = k / x;
        cout << x << endl;
    }
    return 0;
}
