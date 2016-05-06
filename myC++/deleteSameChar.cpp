#include<iostream>

using namespace std;

void deleteSameChar(char* string)
{
	bool hashMap[256] = {false};
	char* p = string;
	while(*p != '\0')
	{
		if(hashMap[*p] == false)
		{
			hashMap[*p] = true;
			cout<<*p;
		}
		p ++;
	}
}

int main()
{
	char s[20] = "moon";
	deleteSameChar(s);
}
