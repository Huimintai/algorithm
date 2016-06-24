#include<iostream>

using namespace std;

void transfer(char* num)
{
	if(num == NULL)
	{
		return;
	}
	while(*num != '\0')
	{
		switch(*num)
		{
			case 'y' :
				cout<<1;
				num += 2;
				break;
			case 'e' :
				cout<<2;
				num += 2;
				break;
			case 's' :
				if(*(num++) == 'a')
				{
					cout<<3;
					num += 2;
					break;
				}
				else
				{
					cout<<4;
					num += 1;
					break;
				}
			case 'w' :
				cout<<5;
				num += 2;
				break;
			case 'l' :
				cout<<6;
				num += 3;
				break;
			case 'q' :
				cout<<7;
				num += 2;
				break;
			case 'b' :
				cout<<8;
				num += 2;
				break;
			case 'j' :
				cout<<9;
				num += 3;
				break;
			default :
				break;
		}
	}
	return;
}

int main()
{
	char s[100] = "yiersansiwuliuqiooobajiu";
	transfer(s);
}
