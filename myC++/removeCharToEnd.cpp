#include<iostream>
#include<string.h>
using namespace std;

void reverseStr(char* string, int start, int end)
{
	int len = end - start + 1;
/*	for(int i=start; i<len/2+start; i++)
	{
		char temp = string[i];
		string[i] = string[end+start-i];
		string[end+start-i] = temp;
	}
*/
	while(start < end)
	{
		char temp = string[start];
		string[start++] = string[end];
		string[end--] = temp;
	}
}


void moveStr(char* string, int m)
{
	if(string == NULL || m <= 0)
	{
		return;
	}
	int len = strlen(string);
	reverseStr(string, 0, m-1);
	reverseStr(string, m, len-1);
	reverseStr(string, 0, len-1);
}

int main()
{
	char s[256] = "abcdefg";
	moveStr(s, 3);
	cout<<s<<endl;
}
