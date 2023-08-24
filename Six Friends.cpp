#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int double2, triple;
        cin >> double2 >> triple;
        double2 = double2 * 3;
        triple = triple * 2;
        if(double2 > triple)
        {
            cout << triple << endl;
        }
        else if(double2 == triple)
        {
            cout << double2 << endl;
        }
        else if(triple > double2)
        {
            cout << double2 << endl;
        }
    }
    return 0;
}
