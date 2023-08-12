#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int bought, sell;
        cin >> bought >> sell;
        if(bought > sell)
        {
            cout << "LOSS" << endl;
        }
        else if(bought == sell)
        {
            cout << "NEUTRAL" << endl;
        }
        else
        {
            cout << "PROFIT" << endl;
        }
    }        
    return 0;
    
}
