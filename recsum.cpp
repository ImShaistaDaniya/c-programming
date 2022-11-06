#include<iostream>
using namespace std;
int add(int n);
int main()
{
    int n;
    cout<<"Enter +ve integer: ";
    cin>>n;
    cout<<"Sum= "<< sum(n);
    return 0;
}
int add(int n)
{
    if(n != 0)
        return n+sum(n-1);
    return 0;
}