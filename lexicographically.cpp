#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cout<<"Enter num of test cases:";
    cin>>t;
    while(t-->=0)
    {
        string s;
        getline(cin,s);
        int m=s.size();
        char cha;
        for(int i=0; i<m; i++)
        {
         for(int j=0; j<m; j++)  
         {
            if (s[i]>s[j])
            {
                cha=s[i];
                s[i]=s[j];
                s[j]=cha;
            }
         } 
        }
        cout<<s;
    }
    return 0;
}