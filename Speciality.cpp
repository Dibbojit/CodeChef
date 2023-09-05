#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if(x > y && x > z)
        {
            cout << "setter" << endl;
        }
        else if(y > x && y > z)
        {
            cout << "tester" << endl;
        }
        else if(z > y && z > x)
        {
            cout << "editorialist" << endl;
        }
    }
}
