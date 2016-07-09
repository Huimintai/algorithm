/*
 * 输入一串数，以','分隔，输出所有数中去掉最大值、最小值之后剩下的个数。
 * （其中最大值与最小值可能有多个）Smple input：3,3,5,3,6,9,7,9   Sample outPut: 3
*/

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int  main()
{
	char s[100] = "1,1,2,3,4,5,5,5,5";
	char* p = s;
	int i = 0;
	char tmp[100] = "\0";
	char* t = tmp;
	int a[100] = {0};
	
	while(*p != '\0')
	{
		if(*p != ',')
		{
			*t++ = *p++;
		}
		else
		{
			a[i++] = atoi(tmp);
			for(int i=0; i<100; i++)
			{
				tmp[i] = '\0';
			}
			t = tmp;
			p++;
		}
	}
	a[i++] = atoi(tmp);
	sort(a, a+i);
	int count = 0;
	for(int k=1; k<i; k++)
	{
		if(a[k] != a[0] && a[k] != a[i-1])
		{
			count++;
		}
	}
	cout<<count<<endl;

	return 0;
}

