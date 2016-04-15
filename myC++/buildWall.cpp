#include<iostream>

using namespace std;

void buildWall(int height)
{
	if(height > 0)
	{
		buildWall(height - 1);
	}
//	addBrickLayer();
}
	
void printNum (int num)
{
	cout<<num;
	if(num<9)
	{
		printNum(num + 1);
	}
	cout<< num<<endl;
}

int main()
{
	printNum(1);
}
