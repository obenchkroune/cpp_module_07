#include <iostream>
#include <cassert>
#include "Iter.hpp"

template <typename T>
void printElement(T &element) {
    std::cout << element << " ";
}

int main() {
    char char_arr[] = {'a', 'b', 'c', 'd', 'e'};
    iter(char_arr, 5, printElement);
    std::cout << std::endl;

    int int_arr[] = {1, 2, 3, 4, 5};
    iter(int_arr, 5, &printElement);
    std::cout << std::endl;

    std::string string_arr[] = {"Hello", "World", "XD"};
    iter(string_arr, 3, &printElement);
    std::cout << std::endl;

    float float_arr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    iter(float_arr, 5, &printElement);
    std::cout << std::endl;

    double double_arr[] = {1.11, 2.22, 3.33, 4.44, 5.55};
    iter(double_arr, 5, &printElement);
    std::cout << std::endl;

    bool bool_arr[] = {true, false, true, false, true};
    iter(bool_arr, 5, &printElement);
    std::cout << std::endl;

    return 0;
}
