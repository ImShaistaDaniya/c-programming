#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter no.of seats:";
    cin>>a;
    while (a--)
    {
        cout<<"Enter seat num:";
        cin>>b;
        switch (b%8)
        {
        case 1: cout<<b+3<<"LB"<<endl;
            break;
        case 2: cout<<b+3<<"MB"<<endl;
            break;
        case 3: cout<<b+3<<"UB"<<endl;
            break;
        case 4: cout<<b-3<<"LB"<<endl;
            break;
        case 5: cout<<b-3<<"MB"<<endl;
            break;
        case 6: cout<<b-3<<"UB"<<endl;
            break;
        case 7: cout<<b+1<<"SU"<<endl;
            break;
        case 0: cout<<b-1<<"SL"<<endl;
            break;
        }
    }
 return 0;
}