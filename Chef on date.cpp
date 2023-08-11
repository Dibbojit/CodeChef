#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int bought, bill;
        cin >> bought >> bill;
        if(bought > bill || bought == bill)
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
