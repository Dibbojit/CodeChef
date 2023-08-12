#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int bob1, bob2, alice;
        cin >> bob1 >> bob2 >> alice;
        bob1 = bob1 + bob2;
        if(bob1 == alice)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }        
    return 0;
    
}
