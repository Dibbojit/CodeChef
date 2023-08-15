#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--)
{
    int ppl, ticket;
    cin >> ppl >> ticket;
    if(ppl < ticket)
    {
        cout << "Yes" << endl;
    }
    else if(ppl > ticket || ppl == ticket)
    {
        cout << "No" << endl;
    }
}
 return 0;
}
    
