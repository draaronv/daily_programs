#include <iostream>
#include <vector>
using namespace std;
int getMinimumSum(vector<int> arr)
{
	int sum=0;
for(int i=0;i<arr.size();i++)
{
	sum+=arr[i];
}
return sum;
}

int main()
{
	vector<int> arr={3,1,2,2};
cout<<	getMinimumSum(arr)<<endl;
	return 0;
}
