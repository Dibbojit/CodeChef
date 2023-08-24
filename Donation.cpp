#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)

    {
        int blood;
        cin >> blood;
        if(blood <= 3)
        {
            cout << "BRONZE" << endl;
        }
        else if(blood > 3 && blood <= 6)
        {
            cout << "SILVER" << endl;
        }
        else
        {
            cout << "GOLD" << endl;
        }
    }
    return 0;
}
