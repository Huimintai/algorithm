#include<iostream>

using namespace std;

char printFirstOnceChar(char* string)
{
	if(string == NULL)
	{
		return '\0';
	}
	int hashMap[256] = {0};
	char* p = string;
	while(*p != '\0')
	{
		hashMap[*p] ++;
		p ++;
	}
	p = string;
	while(*p != '\0')
	{
		if(hashMap[*p] == 1)
		{
			return *p;
		}
		p ++;
	}
	return '\0';
}

int main()
{
	char s[23] = "sdfhkjdshfjs";
	cout<<printFirstOnceChar(s)<<endl;
}
