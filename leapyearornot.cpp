#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter year"<<endl;
cin>>a;
if((a%4==0)&&(a%100==0))
{
    cout<<a<< " is a leap year";
}
else
{
    cout<<a<< " is not a leap year";
}
return 0;
}
