#include<stdio.h>

char* strcpy(char* strDest, const char* strSrc)
{
	if((strDest == NULL) || (strSrc == NULL))
	{
		return NULL;
	}
	char *strDestCopy = strDest;
	while((*strDest++ = *strSrc++)!='\0');
	return strDestCopy;
}

int getStrLen(const char* strSrc)
{
	int len = 0;
	while(*strSrc++!='\0')
	{
		len++;
	}
	return len;
};

int main()
{
	char strSrc[] = "Hello World!";
	char strDest[20];
	int len = 0;

	len = getStrLen(strcpy(strDest, strSrc));
	printf("strDest:%s\n", strDest);
	printf("Length of strDest:%d\n", len);

	return 0;
}
