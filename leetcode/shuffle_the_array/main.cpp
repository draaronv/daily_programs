#include <iostream>
#include <vector>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n)
{
vector<int> result;
for(int i=0;i<nums.size();i++)
{
if(n>i)
{
result.push_back(nums[i]);
result.push_back(nums[i+n]);
}
}
return result;

}

int main()
{
vector<int> nums={1,1,2,2};
int n=2;
vector<int> results;
results=shuffle(nums,n);
for(int i=0;i<results.size();i++)
{
	cout<<results[i]<<"	";
}
cout<<endl;
	return 0;
}
