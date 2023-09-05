#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int bike, car;
        cin >> bike >> car;
        int newbike = bike * 2;
        int newcar = car * 4;
        int total = newbike + newcar;
        cout << total << endl;
    }
}
