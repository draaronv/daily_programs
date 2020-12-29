#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool arrayStringsAreEqual(vector<string> word1, vector<string> word2)
{
bool result;
string word11;
string word22;
for(int i=0;i<word1.size();i++)
{
	word11+=word1[i];
}

for(int i=0;i<word2.size();i++)
{
	word22+=word2[i];
}
if(word11.compare(word22)==0)
{
result=true;
}
else
{
result=false;
}
return result;
}

int main()
{
	vector<string> word1={"a", "cb"};
	vector<string> word2={"ab", "c"};
	cout<<arrayStringsAreEqual(word1,word2)<<endl;
	return 0;
}
