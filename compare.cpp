#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter the values of a and b";
  cin>>a>>b;
  if(a==b)
    cout<<a<< " is equal to " <<b<<endl;
  else if(a<b)
    cout<<a<< " less than " <<b<<endl;
  else if(a>b)
    cout<<a<< " greater than " <<b<<endl;
  else
     cout<<"please enter digits";
  return 0;
} 