#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)

    {
        int rating, rating2, rat;
        cin >> rating >> rating2;
        rat = rating + 200;
        if(rating <= rating2 && rat >= rating2)
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
