#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--)
    {
        int temp;
        cin >> temp;
        if(temp > 20)
        {
            cout << "HOT" << endl;
        }
        else{
            cout << "COLD" << endl;
        }
    }
    return 0;
}
