#include<iostream>
using namespace std;

int main(){
    int om, laptop, fund;
    cin >> om >> laptop >> fund;
    om = om + fund;
    if(om >= laptop)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
