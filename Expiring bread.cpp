#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int total, expire, eats;
        cin >> total >> expire >> eats;
        int total2 = expire * eats;
        if(total > total2)
        {
            cout << "No" << endl;
        }
        else if(total <= total2)
        {
            cout << "Yes" << endl;
        }
    }
}
