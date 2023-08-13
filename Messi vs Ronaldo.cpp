#include<iostream>
using namespace std;

int main()
{
    int goal1, assist1, goal2, assist2, messi, ronaldo;
    cin >> goal1 >> assist1 >> goal2 >> assist2;

    messi = (goal1 * 2) + (assist1 * 1);
    ronaldo = (goal2 * 2) + (assist2 * 1);

    if(messi > ronaldo)
    {
        cout << "Messi" << endl;
    }
    else if(ronaldo > messi)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
    return 0;
}
