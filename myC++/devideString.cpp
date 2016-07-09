#include<iostream>

using namespace std;

void devideString(const char* input, int len, char* output)
{
	const char* p = input;
	char* q = output;
	while(*p != '\0')
	{
		if(*p != ' ')
		{
			*q++ = *p++;
		}
		else
		{
			*q++ = ',';
			while(*p == ' ')
			{
				p++;
			}
		}
	}
	if(*(p-1) != ' ')
	{
		*q++ = ',';
	}
	*q = '\0';
}

int main()
{
	char s[100] = "asd dfg    we   qwe ";
	char b[100];
	devideString(s, 21, b);
	cout<<b<<endl;
}
