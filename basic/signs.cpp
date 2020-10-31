
/*
 * Given two signed integers, write a function that returns true if the signs of
 * given integers are different, otherwise false. For example, the function
 * should return true -1 and +100, and should return false for -100 and -200.
 * The function should not use any of the arithmetic operators.
 *
 */

#include <cassert>
#include <iostream>

int main() {
    // Begin
    int val1 = 100;
    int val2 = -1;
    int val3 = -100;
    int val4 = 1;

    // Xor of the two values. If 1 is in the left bit then its different
    // otherwise its same
    // True = Opposite
    assert((val1 ^ val2) < 0 == true);
    assert((val1 ^ val3) < 0 == true);
    assert((val1 ^ val4) < 0 == false);
}
