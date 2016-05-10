#include<iostream>

using namespace std;

bool hasSubString(const char* srcStr, const char* keyStr)
{
	if(srcStr == NULL || keyStr == NULL)
	{
		return false;
	}
	while(srcStr != '\0')
	{
		const char* p = srcStr;
		const char* q = keyStr;
		while( *p == *q )
		{
			if(*(q+1) == '\0')
			{
				return true;
			}
			p ++;
			q ++;
		}
		srcStr ++;
	}
	return false;
}
		
int main()
{
	char a[12] = "asdfgh";
	char b[12] = "dfs";
	cout<<hasSubString(a, b)<<endl;
}
