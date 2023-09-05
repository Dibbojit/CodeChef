#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int repair, buy;
        cin >> repair >> buy;
        if(repair > buy)
        {
            cout << "New Phone" << endl;
        }
        else if(repair == buy)
        {
            cout << "ANY" << endl;
        }
        else if(repair < buy)
        {
            cout << "REPAIR" << endl;
        }
}
}
