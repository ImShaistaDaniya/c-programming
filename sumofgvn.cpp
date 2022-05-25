#include<iostream>
using namespace std;
int main()
{
    int n,b,sum=0;
    float a;
    cout<<"enter any number";
    cin>>n;
     a=n;
    while (a>0)
    {
      b=a%10;
      a=a/10;
      sum=sum+b;
    }
    cout<<"sum of given number"<<sum;
    return 0;
}