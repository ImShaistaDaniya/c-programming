#include <iostream>
using namespace std;
int main()
{
    int i,n,h,m,o,p,angle;
    cout<<"enter num of testcases";
    cin>>n;
    {
        for(i=0; i<n; i++)
        {
            cout<<"enter hour : ";
            cin>>h;
            cout<<"enter minutes : ";
            cin>>m;
            o=h*30 +m*0.5;
            p=m*0.6;
            angle =abs(h-m);//The abs() function is also overloaded in :cmath header file for floating-point types. complex header file for complex numbers. valarray header file for valarrays.
            angle = min(360-angle,angle);//The min() function in C++ accepts two values and returns the smaller one.
            cout<<angle<<"\n";
        }
    }
    return 0;
}  