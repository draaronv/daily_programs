#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int convertNumber(string word)
{
    string temp;
    for(unsigned int i=0;i<word.size();i++)
    {
        temp+=word[i]-49;
    }
    int val=stoi(temp);
    return val;
}


bool isSumEqual(string firstWord, string secondWord, string targetWord)
{ 
    bool result=false;
    if((convertNumber(firstWord)+convertNumber(secondWord))==convertNumber(targetWord))
    {
        result=true;
    }
return result;
}

int main()
{
string firstWord="acb";
string secondWord="cba";
string targetWord="cdb";
cout<<isSumEqual(firstWord,secondWord,targetWord)<<endl;
return 0;
}
