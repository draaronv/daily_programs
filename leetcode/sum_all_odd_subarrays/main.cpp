#include <iostream>
#include <vector>
using namespace std;

int sumOddLengthSubarrays(vector<int> arr)
{
int sum=0;
for(int unsigned g=arr.size();g>0;g--)
{
    if(g%2!=0)
    {
        for(int unsigned i=0;i<(arr.size()-g)+1;i++)
        {
            for(int unsigned j=i;j<(i+g);j++)
            {
                sum+=arr[j]; 
            }
        }
    }
}
return sum;
}

int main()
{
vector<int> arr={1,4,2,5,3};
cout <<sumOddLengthSubarrays(arr);
return 0;
}
