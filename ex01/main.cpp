#include <iostream>
#include <cassert>
#include "Iter.hpp"

template <typename T>
void printElement(T &element) {
    std::cout << element << " ";
}

void testIterWithIntArray() {
    
}

void testIterWithCharArray() {
    
}

int main() {
    char char_arr[] = {'a', 'b', 'c', 'd', 'e'};
    ::iter(char_arr, 5, printElement);
    std::cout << std::endl;
    

	int int_arr[] = {1, 2, 3, 4, 5};
    ::iter(int_arr, 5, printElement);
    std::cout << std::endl;
	
	std::string string_arr[] = {"Hello", "World", "XD"};
    ::iter(string_arr, 3, printElement);
    std::cout << std::endl;
    return 0;
}
