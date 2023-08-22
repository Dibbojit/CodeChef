#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int kms;
        cin >> kms;
        if(kms <= 300)
        {
            cout << 300 * 10;
        }
        else
        {
            cout << kms * 10;
        }
    }
    return 0;
}
