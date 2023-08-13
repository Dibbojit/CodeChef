#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
    int n, x, y;
    cin >> n >> x >> y;

    int total = (x * 1) + (y * 2);
    if(total > n)
    {
        cout << "NO" << endl;
    }
    else if(n > total || n == total)
    {
        cout << "YES" << endl;
    }
    }
    return 0;
}
