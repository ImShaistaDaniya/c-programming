//Let's start practicing searching with a simple problem statement. You are given an unsorted array of characters Aand a character x. You have to find the number of times x occurs in character array A.
#include<iostream>
using namespace std;
  #include<string>
  
int funcx(char a[], int b){
  int count=0;
  for(int i=0; i<b; i++)
  {
    if(a[i]=='x'){
    count++;}
  }
  cout<<count<<endl;
}
  int main()
  {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      char a[n];
      for (int i=0; i<n; i++)
        cin>>a[i];
        funcx(a,n);
    }
    
    return 0;
  }