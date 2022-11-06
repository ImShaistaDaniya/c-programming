#include<iostream>
using namespace std;
int fibonancci(int x)
{
    int n;
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
        return(fibonancci(x-1)+fibonancci(x-2));
}
int main(){
    int x, i;
    cout<<"Enter num of terms of series: ";
    cin>>x;
    cout<<"\n Fibonnaci series: ";
    while(x--)
    {
       cout<<" "<<fibonancci(i);
       i++;
    }
    return 0;
}