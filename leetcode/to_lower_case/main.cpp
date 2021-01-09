#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string str)
{
for(int unsigned i=0;i<str.length();i++)
{
    if(str[i]<=92 && str[i]>=65)
    {
        str[i]=str[i]+32;
    }
}
return str;
}

int main()
{
string n="HELLO";
cout<<toLowerCase(n)<<endl;
return 0;
}
