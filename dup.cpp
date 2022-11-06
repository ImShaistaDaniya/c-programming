#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no.of testcases: ";
    cin>>t;
    while(t--)
    {
        string str;
        getline(cin,str);
        int m=str.size();
        int count;
        for(int i=0; i<m; i++)
        {
         count=1;
         for(int j=i+1; j<m; j++)
         {
            if(str[i] == str[j] && str[i] !=' ')
            {
                count++;
                str[j]= '0';
            }
         }
         if(count > 1 && str[i]!='0')
         cout<<str[i]<< count;
        }
        cout<<endl;
}
return 0;

}