#include <cstdlib>
#include <iostream>
#include "Array.hpp"
#include <cassert>

#define MAX_VAL 750

void testInitialization() {
    Array<int> numbers(MAX_VAL);
    assert(numbers.size() == MAX_VAL);
    std::cout << "Initialization test passed." << std::endl;
}

void testCopyConstructor() {
    Array<int> numbers(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = i;
    }
    Array<int> copy(numbers);
    for (int i = 0; i < MAX_VAL; i++) {
        assert(copy[i] == numbers[i]);
    }
    std::cout << "Copy constructor test passed." << std::endl;
}

void testAssignmentOperator() {
    Array<int> numbers(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = i;
    }
    Array<int> assigned = numbers;
    for (int i = 0; i < MAX_VAL; i++) {
        assert(assigned[i] == numbers[i]);
    }
    std::cout << "Assignment operator test passed." << std::endl;
}

void testOutOfBoundsAccess() {
    Array<int> numbers(MAX_VAL);
    try {
        numbers[-1] = 0;
        assert(false); // Should not reach here
    } catch (const std::exception& e) {
        std::cout << "Out of bounds access test (negative index) passed." << std::endl;
    }
    try {
        numbers[MAX_VAL] = 0;
        assert(false); // Should not reach here
    } catch (const std::exception& e) {
        std::cout << "Out of bounds access test (exceeding index) passed." << std::endl;
    }
}

void testValueAssignment() {
    Array<int> numbers(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = i;
    }
    for (int i = 0; i < MAX_VAL; i++) {
        assert(numbers[i] == i);
    }
    std::cout << "Value assignment test passed." << std::endl;
}

int main(void) {
    testInitialization();
    testCopyConstructor();
    testAssignmentOperator();
    testOutOfBoundsAccess();
    testValueAssignment();

    std::cout << "All tests passed." << std::endl;
    return 0;
}
