#include<iostream>

using namespace std;

void stringFilter(const char* pInputStr, long lInputLen, char* pOutputStr)
{
	bool hash[256] = {false};
	int i, j;
	for(i=0, j=0; i<lInputLen; ++i)
	{
		if(hash[pInputStr[i]] == false)
		{
			hash[pInputStr[i]] = true;
			pOutputStr[j++] = pInputStr[i];
		}
	}
	pOutputStr[j] = '\0';
}

int main()
{
	char s[256] = "xxxyzdddssa";
	char p[256];
	stringFilter(s, 12, p);
	cout<<p<<endl;
}
