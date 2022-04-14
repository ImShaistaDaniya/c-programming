#include<iostream>
using namespace std;
int main()
 {
   int n,cap,toy;
    int num=0;
    cin>>n;
    while(n--)
    {
      cin>>cap>>toy;
      if(cap>=(toy+2))
      num=num+1;
    }
    cout<<num;
    return 0;
  }
