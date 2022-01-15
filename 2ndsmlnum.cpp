#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter any 3 numbers";
  cin>>a>>b>>c;
  if(((a>b)&&(b>c)) || ((c>b)&&(b>a)))
  {
      cout<<b<< " is the second smallest number";
  }
  if(((b>a)&&(a>c)) || ((c>a)&&(a>b)))
  {
      cout<<a<< " is the second smallest number";
  }
  if(((a>c)&&(c>b)) || ((b>c)&&(c>a)))
  {
      cout<<c<< " is the second smallest number";
  }
return 0;
}