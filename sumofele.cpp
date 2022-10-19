#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no.of test cases: ";
    cin>>t;
    while(t--)
    {
        int i,s,m,sum=0;
        char str[1000];
        cout<<"Enter: ";
        cin>>str;
        for(i=0;str[i]!='\0';i++)
        {
            if((str[i]>='0') && (str[i]<='9'))
            {
                sum = (sum+(str[i]-'0'));
            }
        }
        cout<<"Sum of digits"<<sum;
    }
    return 0;
}