#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;

bool cmp(char a, char b)
{
	if(a>='a'&&a<='z'&&b>='a'&&b<='b' || a>='A'&&a<='Z'&&b>='A'&&b<='Z')
	{
		return a<b;
	}
	else
	{
		return a>b;
	}
}

void sortVowel(char* s, char* output)
{
	int len = strlen(s);
	while(*s != '\0')
	{
		switch(*s)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				*output++ = *s;
			default :
				break;
		}
		s++;
		
	}
//	sort(output, output+len, cmp);
//	cout<<output<<endl;
}

int main()
{
	char s[10] = "eAEIOUDUE";
	char a[10];
	sortVowel(s, a);
//	int len = strlen(a);
	sort(a, a+10, cmp);
	cout<<a<<endl;
}
