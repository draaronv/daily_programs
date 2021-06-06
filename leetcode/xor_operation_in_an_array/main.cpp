#include <iostream>
#include <vector>
using namespace std;
int xorOperation(int n, int start)
{
    int array[n];
    int result=0;
    for (int i=0;i<n;i++)
    {
        array[i]=start+2*i;
        result=result ^ array[i];
    }
    return result;
}

int main()
{
    int n=5;
    int start=0;
    cout<<xorOperation(n,start)<<endl;
}
