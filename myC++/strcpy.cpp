#include<iostream>

using namespace std;

char* strCpy(char* srcDest, const char* srcSrc)
{
	char* s = srcDest;
	if(srcDest != NULL && srcSrc != NULL)	
	{
		while(*srcSrc != '\0')
		{
			*srcDest ++ = *srcSrc ++;
		}
		*srcDest = '\0';
	}
	return s;
}

int main ()
{
	char s1[100];
	char s[] = "hiudsadfhasidf";
	cout<<strCpy(s1, s)<<endl;
}
