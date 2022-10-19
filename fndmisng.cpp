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
        cout<<"Enter lenght of array:";
        cin>>n;
        int array[n];
        cout<<"Enter array:";
        for(int i=0;i<n-1;i++)
        {
            cin>>array[i];
        }
        long long int total=((long long)n*(n+1)/2);
        long long int sum=0;
        for(int i=0;i<n-1;i++)
        {
        sum=sum+array[i];
        }
        cout<<total-sum<<endl;
    }
    return 0;
}