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
	char* p = output;
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
				*p = *s;
			default :
				break;
		}
		s++;
		p++;
		
	}
	*p = '\0';
	sort(output, output+len, cmp);
}

int main()
{
	char s[10] = "eAEIOUDUE";
	char a[10];
	sortVowel(s, a);
	cout<<a<<endl;
}
