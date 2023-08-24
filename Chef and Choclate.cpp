#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)

    {
        int x, y, z, choclate;
        cin >> x >> y >> choclate;
        z = (x * 5) + (y * 10);
        choclate = z / choclate;
        cout << choclate << endl;
    }
    return 0;
}
