#include <iostream>
#include <vector>

using namespace std;
vector<int> runningSum(vector<int>&nums)
{
	for(int i=1;i<nums.size();i++)
	{
		nums[i]=nums[i]+nums[i-1];
	}
	return nums;
}
int main()
{
	vector<int> h;
	h.push_back(1);
	h.push_back(2);
	h.push_back(3);
	h.push_back(4);
	runningSum(h);
	for(int i=0;i<h.size();i++)
	{
		cout<<h[i]<<endl;
	}
	return 0;
}
