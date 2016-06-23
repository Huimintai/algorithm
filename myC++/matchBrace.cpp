#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int matchBrace(char* input)
{
	int answer = 1;
	stack<char> a;
	int len = strlen(input);
	for(int i=0; i<len; i++)
	{
		if(input[i]=='('||input[i]=='[')
		{
			a.push(input[i]);
		}
		if(a.size()>0&&(input[i]==')'||input[i]==']'))
		{
			if(input[i]==')'&&a.top()=='(')
			{
				a.pop();
			}
			else if(input[i]==']'&&a.top()=='[')
			{
				a.pop();
			}
			else
			{
				answer = 0;
				break;
			}
		}
	}
	if(a.size()!=0)
	{
		answer = 0;
	}
	return answer;
}

int main()
{
	char s[14] = "()";
	cout<<matchBrace(s)<<endl;
}
