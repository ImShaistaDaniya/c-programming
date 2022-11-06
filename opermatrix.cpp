#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no.of test case:";
    cin>>t;
    while(t--)
    {
     int m,n,p,i,j;
      cout<<"Enter lenght of row:";
      cin>>m;
      cout<<"Enter lenght of column:";
      cin>>n;
      int a[m][n],b[m][n],k[m][n];
      cout<<"Enter array A:";
      for(i=0;i<m;i++)  
      {
      for(j=0;j<n;j++)
        cin>>a[i][j];
      } 
       cout<<"Enter array B:";
      for(i=0;i<m;i++)  
      {
      for(j=0;j<n;j++)
        cin>>b[i][j];
      } 

      for(i=0;i<m;i++)  
      {
      for(j=0;j<n;j++)
      {
        cout<<a[i][j]+b[i][j]<<" ";
      }
      cout<<endl;
      } 

      for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
         for(int k=0;k<n;k++){
           p+=(a[i][k]*b[k][j]);
         }
         cout<<p<<" ";
         p=0;
       }
       cout<<endl;
        }
    }
    return 0;

}
    