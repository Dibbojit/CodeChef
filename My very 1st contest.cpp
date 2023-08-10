#include<iostream>
using namespace std;

int main()
{

    {
        int user, nosub, tried, submade, success;
        cin >> user >> nosub >> tried;

        submade = user - nosub;
        cout << submade << endl;

        success = submade - tried;
        cout << success << endl;
    }
    return 0;
    
}
