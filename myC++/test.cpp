#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void crossNum(int* input, int len, int* output)
{
	sort(input, input+len);
	int* odd = new int(len);
	int* even = new int(len);
	int oddNum = 0;
	int evenNum = 0;
	for(int i=0; i<len; i++)
	{
		input[i]%2==0 ? even[evenNum++]=input[i]: odd[oddNum++]=input[i];
	}
	int oNum = 0;
	int eNum = evenNum - 1;
	int num = 0;
	while(oNum<oddNum && eNum>=0)
	{
		output[num++] = odd[oNum++];
		output[num++] = even[eNum--];
	}
	while(num<len)
	{
		if(oNum==oddNum)
		{
			output[num++] = even[eNum--];
		}
		else
		{
			output[num++] = odd[oNum++];
		}
	}
}

int main()
{
	int a[12] = {1,2,3,4,5,6,7,8,9,10,12,14};
	int b[12];
	crossNum(a,12,b);
	for(int i=0; i<12; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
