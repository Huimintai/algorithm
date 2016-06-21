#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a<b;
}
void crossNum(int* input,int len,  int* output)
{
	sort(input, input+len, cmp);
	int* odd = new int(len);
	int* even = new int(len);
	int oddNum = 0;
	int evenNum = 0;
	for(int i=0; i<len; i++)
	{
		input[i]%2==0? (even[evenNum++] = input[i]) : (odd[oddNum++] = input[i]);
	}
	for(int i=0; i<evenNum; i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<oddNum; i++)
        {
                cout<<odd[i]<<" ";
        }
	cout<<endl;
	int oNum = 0;
	int eNum = evenNum - 1;
	int out = 0;
	while(oNum<oddNum && eNum>=0)
	{
		output[out++] = odd[oNum++];
		output[out++] = even[eNum--];
	}
	while(eNum >= 0)
	{
		output[out++] = even[eNum--];
	}
	while(oNum < oddNum)
	{
		output[out++] = odd[oNum++];
	}
//	delete [] odd;
//	delete [] even;
}

int main()
{
	int a[12] = {1,2,3,4,5,6,7,8,9,10,11,13};
	int b[12];
	crossNum(a, 12, b);
	for(int i=0; i<12; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
