#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int total, left, added;
        cin >> total >> left >> added;
        cout << (total - left) + added << endl;
    }
    return 0;
}
    
