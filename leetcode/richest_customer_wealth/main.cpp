#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>

using namespace std;
int richestVal(vector<vector<int> > & accounts)
{
	vector<int> max1;
	for(int i=0;i<accounts.size();i++)
	{
		int val=0;
		for(int j=0;j<accounts[i].size();j++)
		{
			val+=accounts[i][j];
		}
		max1.push_back(val);
	}

	int maxval=max1[0];
	for(int k=1;k<max1.size();k++)
	{
		if(max1[k]>maxval)
		{
			maxval=max1[k];
		}
	}
	return maxval;
}

int main()
{
vector<int> h;
vector<int> k;
vector<vector<int>> accounts;
h.push_back(1);
h.push_back(2);
h.push_back(3);

k.push_back(10);
k.push_back(20);
k.push_back(30);
accounts.push_back(h);
accounts.push_back(k);
cout<<richestVal(accounts);
return 0;
}
