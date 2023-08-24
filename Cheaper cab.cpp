#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)

    {
        int cab1, cab2;
        cin >> cab1 >> cab2;
        if(cab1 > cab2)
        cout << "SECOND" << endl;
        else if(cab1 < cab2)
        {
            cout << "FIRST" << endl;
        }
        else if(cab1 == cab2)
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}
