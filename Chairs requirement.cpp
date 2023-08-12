#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;
while(n--)
    {
        int students, chair, sub;
        cin >> students >> chair;

        if(students >= chair)
        {
            chair = students - chair;
            cout << chair << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }        
    return 0;
    
}
