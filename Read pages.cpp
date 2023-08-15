#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--)
{
    int pageno, readable, days;
    cin >> pageno >> readable >> days;
    if(pageno > (readable * days))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
 return 0;
}
    
