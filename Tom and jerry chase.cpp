#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int tom, jerry;
        cin >> tom >> jerry;
        if(tom < jerry)
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
