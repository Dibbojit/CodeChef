#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int prize1, prize2, total;
        cin >> prize1 >> prize2;
        prize1 = prize1 * 10;
        prize2 = prize2 * 90;
        total = prize1 + prize2;
        cout << total << endl;
    }         
    return 0;
    
}
