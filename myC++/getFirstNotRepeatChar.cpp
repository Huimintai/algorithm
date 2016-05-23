#include<iostream>

using namespace std;

char getFirstNotRepeatChar(char* string)
{
	if(string == NULL)
	{
		return '\0';
	}
	int hashTable[256] = {0};
	char* p = string;
	while(*p != '\0')
	{
		hashTable[*(p++)]++;
	}
	
	p = string;
	while(*p != '\0')
	{
		if(hashTable[*p] == 1)
		{
			return *p;
		}
		p++;
	}
	return '\0';
}

int main()
{
	char string[22] = "adsfsdgta";
	cout<<getFirstNotRepeatChar(string)<<endl;
}
