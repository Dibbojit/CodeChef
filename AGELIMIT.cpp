#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int X, Y, A;
        cin >> X >> Y >> A;
        if(X <= A && Y > A)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" <<"\n";
        }
    }
    return 0;
}
