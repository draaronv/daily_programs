#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int minPartitions(string n)
{
int max=0;
for(int unsigned i=1;i<n.size();i++)
{
    if(n[i]>n[max])
    {
        max=i;
    }
}
int value=(int)n[max] - '0';
return value;
}
int main()
{
    string n="32";
    cout<<minPartitions(n);
    return 0;
}
