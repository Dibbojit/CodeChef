#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = 0;
        int mini = 0;
        maxi = max(a, b);
        maxi = max(maxi, c);
        mini = min(a, b);
        mini = min(mini, c);
        cout << maxi - mini << endl;
    }
    return 0;
}
