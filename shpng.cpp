#include<iostream>
using namespace std;
int main()
{
  int n,i:
  float m,o,p,q;
  cout<<"Enter No.of items:"<<endl;
  cin>>n;
  for(i=0;i<n:i++)
  {
    cout<<"Enter quantity of items:";
    cin>>m;
    cout<<"Enter price of items:";
    cin>>o;
    if(m>100)
      {
        p=m-((m*20)/100);
      }
    else
      {
          p=m*o;
      }
      q=+p;
    cout<<"total amount after shop offfer is:"<<q<<endl;
  }
  return 0;
}
