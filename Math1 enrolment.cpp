#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int seats, students;
        cin >> seats >> students;
        if(students > seats)
        {
            seats = students - seats;
            cout << seats << endl;
        }
        else if (students == seats || students < seats)
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
    
