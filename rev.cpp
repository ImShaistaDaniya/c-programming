#include<iostream>
using namespace std;
int main()
{
int a,b,c,d=0;
cout<<"enter the values of a";
cin>>a;
b=a;
while (b>0) 
{
 c=b%10;
 b=b/10;
 d=(d*10)+c;
}
cout<<d;

return 0;
}