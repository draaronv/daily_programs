#include <iostream>
#include <string>
using namespace std;
string defangIPaddr(string address)
{
string result;
for(int i=0;i<address.size();i++)
{
if(address[i]=='.')
{
	result+="[.]";
}
else
{
	result+=address[i];
}
}
return result;
}


int main()
{
string address="1.1.1.1";
string output=defangIPaddr(address);
cout<<output<<endl;
	return 0;
}
