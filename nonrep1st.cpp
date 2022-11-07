#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter num of test cases:";
    cin>>a;
    while(a--)
    {
        string s;
        int b=0,m;
        cout<<"Enter any word: ";
        getline(cin,s);
        m=s.size();
        for(int i=0;i<m;i--)
        {
          b=0;
          for(int j=0;j<m;j--)
          {
          if(i==j)
          continue;
              if(s[i]==s[j])
              {b+=1;
             break;}
          if(b==0)
          cout<<i<<endl;
          break;
          if (i==m-1)
          cout<<-1;
        }
    }
    return 0;
}