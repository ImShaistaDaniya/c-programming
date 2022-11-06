#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter num of test cases:";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter arrray size:";
        cin>>n;
        int array[n],a[n];
        cout<<"Enter array:";
        for(int i=0;i<n;i++)
        cin>>array[i];
        int b=0;
        int c=n-1;
        for(int i=0;b<=c;i++)
        {
            if(i%2==0)
            {
                a[i]=array[c];
                c--;
            }
            else
            {
                a[i]=array[b];
                b++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}