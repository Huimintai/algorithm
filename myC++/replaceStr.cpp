#include<iostream>
#include<string>
#include<cstring>

using namespace std;

void replaceStr(char* srcStr, char* key, char* dest)
{
	int  len = strlen(key);
	char* k = key;
	char* d = dest;
	while(*srcStr != '\0')
	{
		if(*srcStr == *k)
		{
			srcStr++;
			k++;
		}
		else
		{
			srcStr++;
			k = key;
		}
		if(*k == '\0')
		{
			k = key;
			srcStr -= len;
			while(*d != '\0')
			{
				*srcStr++ = *d++;
			}
			d = dest;
		}
	}
}

int main()
{
	char srcStr[] = "abcdefgabc";
	char key[] = "abc";
	char dest[] = "www";
	replaceStr(srcStr, key, dest);
	cout<<srcStr<<endl;
}
