#include<iostream>
#include<cstring>
#include<string>
using namespace std;


int match(string str)
{
	int len = str.size();
	int countL = 0, countR = 0;
	for(int i=0; i<len; i++)
	{
		if(str[i] == '(')
		{
			countL++;
		}
		if(str[i] == ')')
		{
			countR++;
		}
	}

	if(countL != countR || countL == 0 || countR == 0)
	{
		return 0;
	}

	int k = 0, popK = 0;
	for(int j=0; j<len; j++)
	{
		if(str[j] == '(')
		{
			k++;
		}
		if(str[j] == ')')
		{
			if(k == 0)
			{
				return 0;
			} 
			k--;
			popK++;
			if(k == 0)
			{
				if(k != popK)
				{
					return 0;
				}
			}
		}
	}

	cout<<"RIGHT"<<" "<<countL<<" "<<countR;

}

int  main()
{
	string s = "if(asdf)(df)()";
	match(s);
}
