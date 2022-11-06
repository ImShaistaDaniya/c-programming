#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no.of test cases: ";
    cin>>t;
    while(t-->=0)
    {
        string str;
        int m,n,i;
        cout<<"Enter : ";
        getline(cin,str);
        m=str.size();
        int count=0;
        for(i=0; i<m; i++)
        {
            if(str[i]=='s')
            count++;
            cout<<count;
        }
        if(count>float(m/2))
        {
            cout<<m<<endl;
        }
        else
        {
         while(float(m/2)>=count)
         {
            n=n-1;
         }
         cout<<n<<endl;
        }
        
    }
   
    return 0;
}