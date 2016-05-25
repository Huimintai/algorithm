#include<iostream>

using namespace std;

char score(int score)
{
	if(score<0 || score>100)
	{
		cout<<"ERROR"<<endl;
		return '\0';
	}
	switch(score/10)
	{
		case 10 :
		case 9 :
			return 'A';
		case 8 :
			return 'B';
		case 7 :
			return 'C';
		case 6 :
			return 'D';
		default :
			return 'E';
	}
}

int main()
{
	int a;
	cout<<"Please input your score: "<<endl;
	cin>>a;
	cout<<score(a)<<endl;
}
