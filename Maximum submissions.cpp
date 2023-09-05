#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int min = x * 60;
        int sub = min / 30;
        cout << sub << endl;
    }
}
