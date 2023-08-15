#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int friends, cost, chef;
        cin >> friends >> cost >> chef;
        if((friends * cost) <= chef)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
