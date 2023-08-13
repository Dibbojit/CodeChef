#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int starts;
        cin >> starts;

        if(starts > 24)
        {
            cout << "yes" << endl;
        }
        else if(starts < 24 || starts == 24)
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
