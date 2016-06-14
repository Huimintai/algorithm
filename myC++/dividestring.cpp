#include<iostream>

using namespace std;

void divideString(const char* inputStr, long len, char* outputStr)
{
	if(inputStr == NULL)
	{
		return;
	}
	while(*inputStr != '\0')
	{
		if(*inputStr != ' ')
		{
			*outputStr = *inputStr;
		}
		else
		{
			*outputStr = ',';
		}
		inputStr++;
		outputStr++;
	}
	*outputStr = ',';
}

int main()
{
	char s1[100] = "hello good morning";
	char s2[100] = "\0";
	divideString(s1, 19, s2);
	cout<<s2<<endl;
}
