#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

        int alice, bob;
        cin >> alice >> bob;
        if((bob * 2) > alice)
        {
            cout << "No" << endl;
        }
        else if((bob * 2) == alice || (bob * 2) < alice)
        {
            cout << "Yes" << endl;
        }
    
    return 0;
}
    
