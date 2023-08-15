#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int course, unit, chapter;
        cin >> course >> unit >> chapter;
        cout << course * unit * chapter << endl;
    }
    return 0;
}
    
