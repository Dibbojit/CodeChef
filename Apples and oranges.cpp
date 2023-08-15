#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int X, A, B;
        cin >> X >> A >> B;
        if((A + B) == X || (A + B) < X)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}
    
