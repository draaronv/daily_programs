#include <iostream>
#include <string>
using namespace std;
int maxDepth(string s)
{
int result=0;
if(s=="")
{
	return 0;
}
int count1=0;
int maxVal=0;
for(int i=0;i<s.size();i++)
{
	if(s[i]=='(')
	{
		count1++;
	}
	else if(s[i]==')')
	{
		count1--;
	}
	if(count1>maxVal)
	{
		maxVal=count1;
	}

}
return maxVal;
}

int main()
{
	string s="(1+(2*3)+((8)/4))+1";
	cout<<maxDepth(s)<<endl;
	return 0;
}
