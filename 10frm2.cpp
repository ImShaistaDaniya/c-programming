#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter any number"<<endl;
    cin>>n;
       if(n%10==0)
       {
           cout<<1<<endl;
       }
       else if ((n*2)%10==0)
       {
           cout<<2<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }   
    return 0;
    }