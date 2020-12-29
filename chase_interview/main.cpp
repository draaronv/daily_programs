#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

int main() {
  string line;
  while (getline(cin, line))
  {
    string sum="";
    int count=0;
    for(int i=0;i<line.size();i++)
    {
      stringstream hh(line[i]);
      int  val=0;
     hh>>val;
      if(val<=26)
      {
        count++;
        sum+=line[i];
      }
      stringstream k(sum);
      int g=0;
      k>>g;
      if(g<=26)
      {
        count++;
      }
    }
    cout << line << endl;
  }
}
