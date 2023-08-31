#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--)
    {
        int g1, g2;
        cin >> g1 >> g2;
        if((g1 > 0) && (g2 > 0) && (g1 == g2))
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
