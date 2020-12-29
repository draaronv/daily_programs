#include <iostream>
#include <string>
#include <vector>
using namespace std;
string restoreString(string s,vector<int>& indices)
{
	string result=s;
	for(int i=0;i<indices.size();i++)
	{
		result[indices[i]]=s[i];
	}
	return result;
}

int main()
{
string s="aaiougrt";
vector<int>indices={4,0,2,6,7,3,1,5};
cout<<restoreString(s,indices)<<endl;
	return 0;
}
