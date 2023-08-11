#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int n, x;
        cin >> n >> x;
        if(n <= x)
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
