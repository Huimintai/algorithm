#include<iostream>

using namespace std;

char* intToStr(int num)
{
	int len;
	static char numbers[10];
	for(len=0 ;num != 0 ; len++)
	{
		numbers[len] = char( num % 10 + '0');
		num /= 10;
	}
	for(int j=0; j<len/2; j++)
	{
		char temp;
		temp = numbers[len-1-j];
		numbers[len-1-j] = numbers[j];
		numbers[j] = temp;
	}
	return numbers;	
}

int main()
{
	int number = 123;
	cout<<intToStr(number)<<endl;
}
