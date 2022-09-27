#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter num of test cases:";
    cin>>t;
    while(t-->=0)
    {
        int n;
        cout<<"Enter array lenght:";
        cin>>n;
        int array[n],i;
        cout<<"Enter array:";
        for(i=0;i<n;i++)
        {
            cin>>array[i];
        }
        int min=0,max=0;
        min=array[0];
        max=array[n-1];
        for(i=0;i<n;i++)
        {
            if(array[i]<min)
            {
                min=array[i];
            }
            if(array[i]>max)
            {
                max=array[i];
            }
        }
        cout<<min<<""<<"minimum num \n";
        cout<<max<<""<<"maximum num \n";
        t--;
    }
    return 0;
}