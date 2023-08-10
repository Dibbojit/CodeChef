#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N, M, Total;
        cin >> N >> M;
        Total = (N * 5) + (M * 7);
        cout << Total << endl;
    }
    return 0;
    
}    
