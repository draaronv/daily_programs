#include <iostream>
#include <vector>
using namespace std;
vector<int> createTargetArray(vector<int>& nums,vector<int>& index)
{
	vector<int> result;
	for(int i=0;i<index.size();i++)
	{
		result.insert(result.begin()+index[i],nums[i]);
	}
	return result;
}
int main()
{
	vector<int> nums={1,2,3,4,0};
	vector<int> index={0,1,2,3,0};
	vector<int>result=createTargetArray(nums,index);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<endl;
	}
}
