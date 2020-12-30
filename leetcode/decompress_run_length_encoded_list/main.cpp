#include <iostream>
#include <vector>
using namespace std;
vector<int> decompressRLElist(vector<int>& nums)
{
vector<int> results;
for(int i=0;i<nums.size();i+=2)
{
for(int j=1;j<=nums[i];j++)
{
	results.push_back(nums[i+1]);
}
}
return results;
}

int main()
{
	vector<int> nums={1,1,2,3};
	vector<int> result=decompressRLElist(nums);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}
