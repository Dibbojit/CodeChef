#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int rupee;
        cin >> rupee;
        if(rupee >= 10);
        rupee = rupee % 10;
        cout << rupee << endl;
        
    }
    return 0;
}
