#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int X, Y;
        cin >> X >> Y;
        if(X == Y)
        {
            cout << X << "\n";
        }
        else if(X < Y)
        {
            cout << X << "\n";
        }
        else if(X > Y)
        {
            cout << Y << "\n";
        }
    }
    return 0;
}
