#include<iostream>
using namespace std;
int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    while(n--)
    {
        int a;
        cin >> a;
        if(a % k == 0)
        {
         sum++;
        }
        
    } 
    cout << sum << endl;
}
