#include <iostream>
using namespace std;
int main()
{
    int t,m,n,k,i,j;
     cout<<"Enter no.of test cases:";
    cin>>t;
    while(t--)
    {
      cout<<"Enter lenght of row:";
      cin>>m;
      cout<<"Enter lenght of column:";
      cin>>n;
      cout<<"Enter any num to be mutiplied:";
      cin>>k;
      int array[m][n];
      for(i=0;i<m;i++)  
      {
      for(j=0;j<n;j++)
      {
        cin>>array[i][j];
      }
      }

      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
        array[i][j]=(array[i][j]*k);
      }
      }
      
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
        cout<<array[i][j]<<" ";
      }
      cout<<endl;
      }
    } 
    
    return 0;
}
