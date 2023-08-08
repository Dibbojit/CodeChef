#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int K, Sum;
        cin >> K;
        Sum = (K + K) * 5;
        cout << Sum << "\n";
    }
    return 0;
}
