#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int tv1, tv2, dis1, dis2;
        cin >> tv1 >> tv2 >> dis1 >> dis2;
        int pri1 = tv1 - dis1;
        int pri2 = tv2 - dis2;
        if(pri1 > pri2)
        {
            cout << "Second" << endl;
        }
        else if(pri1 == pri2)
        {
            cout << "Any" << endl;
        }
        else if(pri1 < pri2)
        {
            cout << "First" << endl;
        }
    }
}
