#include<iostream>

using namespace std;

struct MyStruct
{
	int x;
};

void updatestruct (MyStruct my_struct)
{
	my_struct.x = 10;
}

int main ()
{
	MyStruct my_struct;
	my_struct.x = 5;
	updatestruct(my_struct);
	cout<<my_struct.x<<'\n';
}

