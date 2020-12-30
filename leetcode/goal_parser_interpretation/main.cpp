#include <iostream>
#include <string>

using namespace std;
string interpret(string command)
{
	string inter;
	for(int i=0;i<command.size();i++)
	{
		if(command[i] == '(' )
		{
			if(command[i+1]==')')
			{
			inter+='o';
			}
			else
			{
			}		
		}
		else if(command[i]==')')
		{
		}
		else
		{
			inter+=command[i];
		}
	}
	return inter;
}
int main()
{
	string command="G()()()()(al)";
	cout<<interpret(command)<<endl;
	return 0;
}
