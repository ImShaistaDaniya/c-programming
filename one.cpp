#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"enter any num:";
    cin>>n;
    cout<<"enter any num of rows:";
    cin>>m;
    for(i=0;i<m;i++)
    {
        for(j=i;j>=0;j--) 
        {
          cout<<n;
        }
        cout<<endl;
    }
   return 0; 
}

