/*
 * Write a program that unsets the rightmost set bit of an integer.
 * Yeet
 * Reverting to the number before would flip the right most bit
 */

#include <bitset>
#include <cassert>
#include <iostream>

int unsetThatBOY(unsigned int x) { return x &= x - 1; }

int main() {
    int a = 13;
    int b = 23;

    assert(unsetThatBOY(a) == 12);
    assert(unsetThatBOY(b) == 22);
}
