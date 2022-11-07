#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f,g;
    cout<<"Enter any num:";
    cin>>a;
    b=a;
    while(a>0)
    {
        c=a%10;
        a=a/10;
        d++;
    }
    cout<<"entered number has "<<d<<"no.of digit";
    while()
       e=b%10;
       b=b/10;
       f=b%10;
       if(e=f)
       {
         cout<<"not a fascinating number";
       }
    

    return 0;
}