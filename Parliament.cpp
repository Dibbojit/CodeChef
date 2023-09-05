#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--)
    {
        float total, vote;
        cin >> total >> vote;
        float div = total / 2;
        if(vote >= div)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
