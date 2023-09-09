#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int final = w + ((x - y) * z);
        cout << final << endl;
    }
    return 0;
}
