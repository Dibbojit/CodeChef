#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int Y, X, Sub;
        cin >> Y >> X;
        Sub = Y - X;
        cout << Sub << "\n";
    }
    return 0;
}
