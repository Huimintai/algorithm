#include<iostream>

using namespace std;

void swap (int left, int right) {
	int temp;
	temp = left;
	left = right;
	right = temp;
}

void swap1 (int* p_left, int* p_right) {
	int* temp;
	*temp = *p_left;
	*p_left = *p_right;
	*p_right = *temp;
}

int main () {
	int x = 1;
	int y = 2;
//	swap(x, y);
//	cout << x << y << endl;
	swap1(&x, &y);
	cout << x << y << endl;
}
	
