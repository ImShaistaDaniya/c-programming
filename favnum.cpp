#include<iostream>
using namespace std;
  int main()
  {
   int t;
   cout<<"enter number of test cases:";
   cin>>t;
   while(t--)
   {
     int n,m,count=0, d;
     cout<<"enter any number:";
     cin>>n;
     cout<<"enter fav number:";
     cin<<m;
     while(n!=0)
     {
     d=n%10;
    if(d==m)
    count++;
    n=n/10;
    }
    cout<<count<<endl;
   }
    return 0;
  }