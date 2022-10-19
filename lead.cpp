#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no.of test cases:";
    cin>>t;
    while(t-->=0)
    {
        int n,i,array[n],temp;
        cout<<"Enter array lenght:";
        cin>>n;
        cout<<"Enter array";
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        temp=array[n-1];
        for(int i=n-1; i>0; i--)
        {
            if(array[i]>=temp)
            {
                temp=array[i];
                cout<<array[i]<<" \n";   
            }
        }
    }
    return 0;
}