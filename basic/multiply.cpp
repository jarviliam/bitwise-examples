/*
 *Given an integer x, write a function that multiplies x with 3.5 and returns
 *the integer result. You are not allowed to use %, /, *.
 */

#include <cassert>
#include <iostream>

int multipy(int a, double b = 3.5) { return (a << 1) + a + (a >> 1); }

int main() {
    int val = 10;
    assert(multipy(val) == 35);
}
