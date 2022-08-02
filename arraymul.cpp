#include<iostream>
using namespace std;

int main()
{
  int a,b,arr1[10],arr2[10],c[10],i;
  cout<<"enter size of array";
  cin>>a;
  cout<<"enter elements of array 1:-";
  for(i = 0;i<a;i++)
  {
    cin>>arr1[i];
  }
  cout<<"enter elements of array 2:-";
    for(i = 0;i<a;i++)
  {
    cin>>arr2[i];
  }
  for(i = 0;i<a;i++)
  {
  c[i] = arr1[i]*arr2[i];
  ///cout<<arr1[i]<<"*"<<arr2[i]<<"="<<c[i]<<"\n";///
  cout<<c[i]<<" ";
  }
return 0;
}
