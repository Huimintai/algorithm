#include<iostream>
#include<cstring>
using namespace std;

void cutStr(char* s, int n)
{
	int len = strlen(s);
	for(int i=0; i<=len; i++)
	{
		if((i+1) % n != 0)
		{
			cout<<s[i];
		}
		else
		{
			cout<<s[i];
			cout<<endl;
		}
	}
	for(int i=0; i<(n-(len%n)); i++)
	{
		cout<<'0';
	}
	cout<<endl;
}

int main()
{
	char s[] = "wertasdfsgdsfhytdrjuyiyuidfg";
	cutStr(s, 8);
}
