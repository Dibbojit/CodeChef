#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)

    {
        int fuel, home;
        cin >> fuel >> home;
        fuel = fuel * 5;
        if(fuel >= home)
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
