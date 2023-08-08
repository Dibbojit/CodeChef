#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int X, Y, A;
        cin >> X >> Y;
        A = Y - X;
        cout << A << "\n";
    }
    return 0;
}
