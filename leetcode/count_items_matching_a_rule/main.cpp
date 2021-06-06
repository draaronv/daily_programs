#include <iostream>
#include <vector>
using namespace std;
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue)
{
    int temp=0;
    for(int i=0;i<items.size();i++)
    {
        if(ruleKey=="type")
        {
            if(ruleValue==items[i][0])
            {
                temp++;
            }
        }
        else if(ruleKey=="color")
        {
            if(ruleValue==items[i][1])
            {
                temp++;
            }

        }
        else if(ruleKey=="name")
        {
            if(ruleValue==items[i][2])
            {
                temp++;
            }
        }
    }
return temp;
}

int main()
{
vector<vector<string>> items={{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
string ruleKey="color";
string ruleValue="silver";
cout<<countMatches(items,ruleKey,ruleValue)<<endl;
}
