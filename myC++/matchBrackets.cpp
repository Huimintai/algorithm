/*
 * 输入一串字符串，其中有普通的字符与括号组成（包括‘（’、‘）’、‘[’,']'）,要求验证括号是否匹配，如果匹配则输出0、否则输出1.
 * Smple input：dfa(sdf)df[dfds(dfd)]    Smple outPut:0
*/
/*
 bool matchBrackets(char* input)
{
	int count = 0;
	while(*input != '\0')
	{
		if(*input == ')')
		{
			count--;
		}
		else if(*input == '(')
		{
			count++;
		}
		if (count<0)
		{
			return false;
		}
		input++;
	}
	return count == 0;
}

*/




#include<iostream>
#include<stack>

using namespace std;

int matchBrackets(char* input)
{
	stack<char> s;
	char* p = input;
	while(*p != '\0')
	{
		switch(*p)
		{
		case '(' :
		case '[' :
		case '{' :
			s.push(*p);
			break;
		case ')' :
			if(s.top() == '(')
			{
				s.pop();
				break;
			}
			else
			{
				return 1;
			}
		case ']' :
			if(s.top() == '[')
			{
				s.pop();
				break;
			}
			else
			{
				return 1;
			}
		case '}' :
			if(s.top() == '{')
			{
				s.pop();
				break;
			}
			else
			{
				return 1;
			}
		default :
			break;
		}
		p++;
	}
	return !s.empty();
}


int main()
{
	char s[100] = "a{sd(sd}f)sdf(cS[df])";
	cout<<matchBrackets(s)<<endl;
}
