#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no.of test case:";
    cin>>t;
    while(t--)
    {
        int m,n;
        int array[m][n];
        cout<<"Enter lenght of row and column:";
        cin>>m>>n;
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>array[i][j];
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
           {
            if(j<=i)
            cout<<array[i][j]<<" ";
            else
            cout<<"0"<<" ";
           }
           cout<<"\n";
        }
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
           {
            if(j>=i)
            cout<<array[i][j]<<" ";
            else
            cout<<"0"<<" ";
           }
           cout<<"\n";
        }
    }
    return 0;
}