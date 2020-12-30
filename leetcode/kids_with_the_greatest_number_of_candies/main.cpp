#include  <iostream>
#include <vector>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies,int extraCandies)
{
	vector<bool> result;
	int max=candies[0];
	for(int i=0;i<candies.size();i++)
	{
		if(candies[i]>max)
		{
			max=candies[i];
		}
		candies[i]+=extraCandies;
	}

	for(int i=0;i<candies.size();i++)
	{
		if(candies[i]>=max)
		{
			result.push_back(true);
		}
		else
		{
			result.push_back(false);
		}
	}
	return result;

}

int main()
{
	vector<int> candies={12,1,12};
	vector<bool> result;
	int extraCandies=10;
	result=kidsWithCandies(candies,extraCandies);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i];
	}
	cout<<endl;
	return 0;
}
