#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--)
    {
        int guards, manipulate;
        cin >> manipulate >> guards;
        if(guards > manipulate)
        {
            cout << "No" << endl;
        }
        else 
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
