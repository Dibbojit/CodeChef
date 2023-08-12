#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int chef;
        cin >> chef;
        if(chef <= 30)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }        
    return 0;
    
}
