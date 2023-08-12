#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int rtp, audit, non, total;
        cin >> rtp >> audit >> non;
        total = (rtp * 4) + (audit * 2) + (non * 0);
        cout << total << endl;
    }        
    return 0;
    
}
