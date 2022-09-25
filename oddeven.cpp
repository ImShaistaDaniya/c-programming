#include<iostream>
using namespace std;
   int main()
   {
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cout<<"Array lenght";
        cin>>n;
        int array[n];
        cout<<"Enter an array";
        for(i=0; i<n; i++)
        {
            cin>>array[i];
        }
        for(i=0; i<n; i++)
        {
            if(array[i]%2 == 0)
            {
                cout<<array[i]<<" "<<" even in given array \n";
            }
        }
        cout<<endl;
        for(i=0; i<n; i++)
        {
            if(array[i]%2 != 0)
            {
                cout<<array[i]<<" "<<" odd in given num \n";
            }
        }
    }
    return 0;
   }