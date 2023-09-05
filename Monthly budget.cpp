#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int total, expend;
        cin >> total >> expend;
        expend = expend * 30;
        if(expend > total)
        {
            cout << "No" << endl;
        }
        else if(expend == total)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "Yes" << endl;
        }
    }
}
