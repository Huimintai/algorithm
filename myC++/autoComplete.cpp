#include<iostream>
#include<string.h>
using namespace std;

void auto_complete(char* str, char* key, char* output)
{
	if(str == NULL || key == NULL ||  output == NULL)
	{
		return;
	}
	char word[256];
	char* p = word;
	memset(word, '\0', 256);
	while(true)
	{
		if(*str != ' ' && *str != '\0')
		{
			*p++ = *str++;
		}
		else
		{
			p = word;
			char* k = key;
			while(*p++ == *k++)
			{
				if(*k == '\0')
				{
					p = word;
					while(*p != '\0')
					{
						*output++ = *p++;
					}
					if(*str != '\0')
					{
						*output++ = ' ';
					}
					break;
				}
			}
			if(*str == '\0')
			{
				break;
			}
			memset(word, '\0', 256);
			p = word;
			str++;
		}
	}
}

int main()
{
	char a[100] = "chengdu chengqing chongzhou";
	char key[10] = "c";
	char output[100] = {'\0'};
	auto_complete(a, key, output);
	cout<<output<<endl;
}
