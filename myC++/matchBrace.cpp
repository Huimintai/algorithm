#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int matchBrace(char* input)
{
	char s[100];
	int j=0;
	int flag = 0;
	int len =  strlen(input);
	for(int i=0; i<len&&flag==0; i++)
	{
		switch(input[i])
		{
			case '(' :
			case '[' :
				s[j] = input[i];
				j++;
				break;
			case ')' :
				if(input[i-1] == '(')
				{
					s[j-1] = '\0';
					j--;
				}
				else
				{
					flag = 1;
				}
				break;
			case ']' :
				if(input[i-1] = '[')
				{
					s[j-1] = '\0';
					j--;
				}
				else
				{
					flag = 1;
				}
				break;
			default :
				break;
		}
	}
	return flag;
}
		

int main()
{
	char s[100] ="dfss(fdds)[dsfsd]";
	cout<<matchBrace(s)<<endl;
}
