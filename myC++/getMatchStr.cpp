#include<iostream>

using namespace std;

int getMatchStr(const char* srcStr, const char* keyStr)
{
	switch(*keyStr)
	{
		case'\0':
			return (*srcStr == '\0')?1:0;
		case'?':
			return (*srcStr == '\0')?0:getMatchStr(srcStr+1, keyStr+1);
		case'*':
			return (*srcStr == '\0')?getMatchStr(srcStr, keyStr++):getMatchStr(srcStr+1, keyStr)|getMatchStr(srcStr, keyStr+1);
		default:
			return (*srcStr!=*keyStr)?0:getMatchStr(srcStr+1, keyStr+1);
	}
}

int main()
{
	char a[10] = "tomcat";
	char b[10] = "to?c*at";
	cout<<getMatchStr(a, b)<<endl;
}

