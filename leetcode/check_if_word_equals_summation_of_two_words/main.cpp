#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isSumEqual(string firstWord, string secondWord, string targetWord)
{
    string firstW;
    int first;
    string secondW;
    int second;
    string targetW;
    int target;
    bool result=false;
    for (int i=0;i<firstWord.size();i++)
    {
        firstW+=firstWord[i]-49;
    }
    first=atoi(firstW.c_str());
    for (int i=0;i<secondWord.size();i++)
    {
        secondW+=secondWord[i]-49;
    }
    second=atoi(secondW.c_str());
    for (int i=0;i<targetWord.size();i++)
    {
        targetW+=targetWord[i]-49;
    }
    target=atoi(targetW.c_str());
    if((first+second)==target)
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
