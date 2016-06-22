#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

void covert(char* input, char* output)
{
	int len = strlen(input);
	int flag = 0;
	char tmp = '\0';
	for(int i=0; i<len; i++)
	{
		if(input[i] != tmp)
		{
			output[i] = (input[i] - 'a' + 1) % 26 + 'a';
			tmp = input[i];
			flag = 1;
		}
		else if(flag == 1)
		{
			output[i] = (input[i] - 'a' + 2) % 26 + 'a';
			tmp = input[i];
			flag = 0;
		}
		else
		{
			output[i] = (input[i] - 'a' + 1) % 26 + 'a';
			tmp = input[i];
			flag = 1;
		}
	}
		
}

int main()
{
	char s[10] = "aaadzzz";
	char b[10] = "\0";
	covert(s, b);
	cout<<b<<endl;
}
