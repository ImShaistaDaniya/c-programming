#include<iostream>
#include<string>
using namespace std;
int main()
{
 int t;
 cout<<"Enter num of test cases:";
 cin>>t;
 while(t>=0)
 {

    string s;
    int a,i,v=0,c=0;
    getline(cin,s);
    a=s.size();
    for(i=0; i<a; i++)
    {
        char k;
        k=s[i];
        if((k=='A')||(k=='E')||(k=='I')||(k=='O')||(k=='U')|(k=='a')|(k=='e')|(k=='i')|(k=='o')|(k=='u'))
        v++;
        else
        c++;  
    }
    if((c==0)&&(v==0))
    continue;
    else
    cout<<v <<" num of vowels \n";
    cout<<c <<" num of consonants";
 }
return 0;
}