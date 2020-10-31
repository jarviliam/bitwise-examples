/*
 *Write a program to add one to a given number. The use of operators like ‘+’,
 *‘-‘, ‘*’, ‘/’, ‘++’, ‘–‘ …etc are not allowed.
 */

#include <cassert>
#include <iostream>

// A being the Summation and B being the carry over value
unsigned int addition(int a, int b) {
    // If there isnt a carry over value we are finished
    if (b == 0) {
        return a;
    }
    // Otherwise Recursively call until Carry is finished
    return addition(a ^ b, (a & b) << 1);
}

int main() {
    int val = 2;
    assert(addition(val, 1) == 3);
    assert(addition(99, 1) == 100);
}
