#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int press1, press2;
        cin >> press1 >> press2;
        if(press1 < press2)
        {
            cout << press2 - press1 << endl;
        }
        else 
        {
            cout << press1 - press2 << endl;
        }
    }
    return 0;
}
