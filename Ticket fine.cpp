#include<iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int fee, ppl, ticket;
        cin >> fee >> ppl >> ticket;
        fee = (ppl - ticket) * fee;
        cout << fee << endl;
    }
    return 0;
}
