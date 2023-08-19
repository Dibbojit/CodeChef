#include<iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int alice, bob;
        cin >> alice >> bob;
        alice = 7 - alice;
        bob = 7 - bob;
        if(alice > bob)
        {
            cout << bob << endl;
        }
        else if(bob > alice)
        {
            cout << alice << endl;
        }
        else if (alice == bob)
        {
            cout << alice << endl;
        }
    }
    return 0;
}
