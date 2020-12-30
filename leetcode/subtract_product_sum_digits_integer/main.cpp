#include <iostream>
#include <string>
using namespace std;
int subtractProductAndSum(int n)
{
	int result1=0;
	int result2=1;
	while(n!=0)
	{
	int rem=n%10;
	n/=10;
	result1+=rem;
	result2*=rem;
	}
	return (result2-result1);
}
int main()
{
	int n=4421;
	cout<<subtractProductAndSum(n)<<endl;
	return 0;
}
