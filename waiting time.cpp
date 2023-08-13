#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int k, x, let;
        cin >> k >> x;

        let = (k * 7) - x;
        cout << let << endl;
    }
    return 0;
}
