#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int alice, bob, charlie;
        cin >> alice >> bob >> charlie;

        if(alice > bob && alice > charlie)
        {
            cout << "Alice" << endl;
        }
        else if(bob > alice && bob > charlie)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}
