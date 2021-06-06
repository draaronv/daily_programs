#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool checkIfPangram(string sentence)
{
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    if(sentence.size()<26)
    {
        return false;
    }
    else
    {
        int temp=0;
        for(int i=0;i<=sentence.size();i++)
        {
            for(int j=0;j<=alphabet.size();j++)
            {
                if(alphabet[j]==sentence[i])
                {
                    alphabet.erase(remove(alphabet.begin(),alphabet.end(),alphabet[j]),alphabet.end());
                }
            }
        }
    if(alphabet.size()==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    }

}

int main()
{
string sentence="leetcode";
cout<<checkIfPangram(sentence)<<endl;
}
