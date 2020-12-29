#include <iostream>
using namespace std;
int numberOfSteps(int num)
{
	int count=0;
	while(num!=0)
	{
		if(num%2==0)
		{
			num=num/2;
			count++;
		}
		else
		{
			num--;
			count ++;
		}
	}
	return count;
}

int main()
{
	int num=8;
	cout<<numberOfSteps(num)<<endl;
	return 0;
}
