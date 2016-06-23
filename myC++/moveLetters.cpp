#include<iostream>
#include<cstring>
using namespace std;

void moveLetters(char* input, char* output)
{
	if(input == NULL)
	{
		return;
	}
	int len = strlen(input);
	int tmp = '\0';
	int i = 0;
	int count = 1;
	for(; i<len; i++)
	{
		if(input[i] == tmp)
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if(count % 2 == 1)
		{
			output[i] = (input[i] - 'a' + 1)%26 + 'a';
		}
		else
		{
			output[i] = (input[i] - 'a' + 2)%26 + 'a';
		}
		tmp = input[i];
	}
	output[i] = '\0';
}

int main()
{
	char s[100] = "aaaadfgzzzz";
	char a[100];
	moveLetters(s, a);
	cout<<a<<endl;
}
