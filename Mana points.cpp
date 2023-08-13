#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        x = y / x;
        cout << x << endl;

        if(x > y)
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
