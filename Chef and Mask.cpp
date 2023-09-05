#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        x = 100 * x;
        y = 10 * y;
        if(x >= y)
        {
            cout << "cloth" << endl;
        }
        else
        {
            cout << "Disposable" << endl;
        }
    }
}
