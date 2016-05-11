#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int deleteSubStr(const char* srcStr, const char* keyStr, char* result)
{
	if(srcStr == NULL || keyStr == NULL || result == NULL)
	{
		return 0;
	}
	int count = 0;
	int keyStr_len = strlen(keyStr);
	while(*srcStr != '\0')
	{
		bool matched = false;
		const char* p = srcStr;
		const char* q = keyStr;
		while(*p++ == *q++ || *q == '\0')
		{
			if(*q == '\0')
			{
				matched = true;
				count ++;
				srcStr += keyStr_len;
				break;
			}
		}
		if(!matched)
		{
			*result++ = *srcStr++;
		}

	}
	return count;
}

int main()
{
	char a[20] = "abcd123sa123";
	char key[4] = "123";
	char result[10] = "\0";
	cout<<deleteSubStr(a, key, result)<<endl;
	cout<<result<<endl;
}
