#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char* argv[]) {
        int x;
        int *p_int;

        p_int = &x;
        std::cout << "Please enter a number: ";
        std::cin >> x;
        std::cout << *p_int << std::endl;
        *p_int = 10;
        std::cout << x;
}

