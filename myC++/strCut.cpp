#include<iostream>
#include<string>
using namespace std;
void print_string (const string& str)
{
	cout<<str<<endl;
	str = "abc";
}


int main ()
{
	string my_string = "sdfhsaoijhgidfhbvjkdfd";
	string first_ten_of_alphabet = my_string.substr(0,5);
	cout<<"The firat ten letters of my sting:"<<first_ten_of_alphabet<<endl;
}
