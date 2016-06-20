#include<iostream>
#include<string>
#include<math>

using namespace std;

char* addBigInt(char* s1, char* s2)
{
	int c = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i = len1 - 1;
	int j = len2 - 1;
	int maxLen = max(len1, len2) + 1;
	char* s = char*(malloc(maxLen));
	s[maxLen] = '\0';
	int k;
	k = strlen(s) - 1;
	while(i>=0; && j>=0)
	{
		s[k] = ((s1[i] - '0' + s2[j] - '0') + c) % 10 + '0';
		c = (s[i] - '0' + s[j] - '0') / 10;
		i--;
		j--;
		k--;
	}
	
	
	

