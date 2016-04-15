void stringFilter(const char* pInputStr, long lInputLen, char* pOutputStr)
{
	bool hash[26] = {0};
	int i, j;
	for(i=0, j=0; i<lInputLen; ++i)
	{
		if(false == hash[pInputStr[i] - 'a'])
		{
			hash[pInputStr[i] - 'a'] = true;
			pOutputStr[j++] = pInputStr[i];
		}
	}
	pOutputStr[j] = '\0';
}
