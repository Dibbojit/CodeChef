#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int interest, inflation;
        cin >> interest >> inflation;
        if((inflation * 2) <= interest)
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
    
