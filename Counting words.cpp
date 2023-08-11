#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int page, words;
        cin >> page >> words;
        words = page * words;
        cout << words << endl;
    }        
    return 0;
    
}
