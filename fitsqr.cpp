#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"No.of rectanagle:";
    cin>>a;
    while(a--)
    {
        int b,c,d;
        cout<<"Enter the dimensions (lenght,breath) of rectanagle:"<<"\n";
        cin>>b>>c;
        d=(b*c)/2;
        cout<<"maximum no.of blocks can placed:"<<d<<endl;
    }
    return 0;
}