#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int ticket;
        cin >> ticket;
        ticket = ticket * 4;
        if(ticket <= 1000)
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
