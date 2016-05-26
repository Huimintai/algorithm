#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
/*

char* intToStr(int num)
{
	int n = num;
	int len = 0;
	while(num != 0)
	{
		num /= 10;
		len++;
	}

	static char s[100];
	s[len] = '\0';
	for(int i=0; i<len; i++)
	{
		s[len-1-i] = n % 10 + '0';
		n /= 10;
	}
	return s;
}
void stringZip(char* input, long len, char* output)
{
	if(input == NULL || len<=0 || output == NULL)
	{
		return;
	}
	char* curChar = input;
	int count = 0;
	while(true)
	{
		if(*input == *curChar)
		{
			count++;
			*input++;
		}
		else
		{
			if(count > 1)
			{
				char* s = intToStr(count);
				strcat(output, s);
			}
			int len = strlen(output);
			output[len] = *curChar;
			*curChar = *input;
			count = 1;
			if(*input == '\0')
			{
				return;
			}
			input++;
		}
	}
	output[strlen(output)] = '\0';
}
*/

void stringZip(char* input, long len, char* output)
{
	int i = 0, j = 0, count = 1;
	for(; i<len; i++)
	{
		if(i+1<len && input[i] == input[i+1])
		{
			count++;
		}
		else
		{
			if(count != 1)
			{
				itoa(count, output, 10);
				j = strlen(output);
				output[j] = input[i];
			}
			output[++j] = input[i];
			count = 1;
		}
	}
	output[++j] = '\0';
}

int main()
{
	char s[100] = "xxxyzzssd";
	char output[256];
	stringZip(s, 9, output);
	cout<<output<<endl;
}
