#include <iostream>
#include <string>
using namespace std;
 int balancedStringSplit(string s) 
    {
       int sum=0;
    int val1=0;
    int val2=0;
    for (int unsigned i=0;i<s.length();i++)
    {
        if(s[i]=='R')
        {
            val1++;
        }
        else
        {
            val2++;
        }
    if(val1==val2)
    {
        sum++;
    }
    }
    return sum; 
}

int main()
{
    string n1="RLRRLLRLRL";
    string n2="RLLLLRRRLR";
    string n3="LLLLRRRR";
    string n4="RLRRRLLRLL";
    cout<<balancedStringSplit(n1)<<endl;
    cout<<balancedStringSplit(n2)<<endl;
    cout<<balancedStringSplit(n3)<<endl;
    cout<<balancedStringSplit(n4)<<endl;
}
