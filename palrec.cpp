#include<iostream>
using namespace std;
string pallindrome(string str)
{
    int count=0,n;
    n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i] == str[n-i-1])
        {
            count++;
        }
    }
    if(count >= n)
     return "yes";
    else
     return"no";
}
int main()
  {
    int n;
    cin>>n;
    while(n--)
    {
      string str;
      cin>>str;
      cout<<pallindrome(str)<<endl;
    }
    return 0;
  }