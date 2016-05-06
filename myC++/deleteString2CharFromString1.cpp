#include<iostream>

using namespace std;

void deleteChar(char* string1, char* string2)
{
	if(string1 == NULL)
	{
		return;
	}
	bool hashMap[256] = {false};
	char* p = string1;
	char* q = string2;
	while(*q != '\0')
	{
		hashMap[*q] = true;
		q ++;
	}
	while(*p != '\0')
	{
		if(hashMap[*p] == false)
		{
			cout<<*p;
		}
		p ++;
	}
}

int main()
{
	char s1[20] = "abcdefghijk";
	char s2[20] = "abcd";
	deleteChar(s1, s2);
	cout<<endl;
}		
