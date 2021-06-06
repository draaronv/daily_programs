#include <iostream>
#include <vector>
using namespace std;


vector<int> decode(vector<int>& encoded, int first)
{
    vector<int> temp;
    temp.push_back(first);
    for(unsigned int i=0;i<encoded.size();i++)
    {
        temp.push_back(temp[i] ^ encoded[i]);
    }
    return temp;
}

int main()
{
    vector<int> encoded={6,2,7,3};
    int first=4;
    vector<int>result=decode(encoded,first);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
