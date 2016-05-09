#include<iostream>

using namespace std;

void MatrixTranspose(const char* inArray, unsigned int n, char* outArray)
{
	if(inArray == NULL || n<=0)
	{
		return;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			outArray[j*n+i] = inArray[i*n+j];
		}
	}
}

int main()
{
	char a[10] = "123456789";
	char b[10] = {'\0'};
	MatrixTranspose(a, 3, b);
	cout<<b<<endl;
}
