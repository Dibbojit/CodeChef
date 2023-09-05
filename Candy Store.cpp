#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--)
    {
        int goal, sold;
        cin >> goal >> sold;
        if(goal >= sold)
        {
            cout << sold << endl;
        }
        else
        {
            int extra = abs(goal - sold);
            cout << goal + (extra * 2) << endl;
        }
    }
    return 0;
}
