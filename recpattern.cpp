#include<iostream>
using namespace std;
    void fun(int n)
    {
      if(n<=0)
      {
        cout<<n<<"";
        return ;
      }
      cout<<n<<" ";
      
      fun(n-5);
      cout<<n<<" ";
    }
    
    int main()
    {
      int t;
      cout<<"Enter num of test cases: ";
      cin>>t;
      while(t--)
      {
        int n,m;
        cout<<"Enter num: ";
        cin>>n;
        fun(n);
        cout<<endl;
      }
      return 0;
    }