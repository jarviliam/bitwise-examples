/*
 *Given an array where every element occurs three times, except one element
 * which occurs only once. Find the element that occurs once. Expected time
 * complexity is O(n) and O(1) extra space.
 *
 * Running XOR on 2 of the same numbers resets their bits
 *
 */

#include <array>
#include <bitset>
#include <cassert>
#include <iostream>

int getUniqueElement(const std::array<int, 5> &arr1) {
    assert(arr1.size() % 2 == 1);
    int item = arr1[0];
    std::cout << "Starting Bits : " << std::bitset<8>(item) << std::endl;
    for (int i = 1; i < arr1.size(); i++) {
        item = item ^ arr1[i];
        std::cout << std::bitset<8>(arr1[i]) << std::endl;
    }
    return item;
};

int main() {
    std::array<int, 5> arr1 = {2, 5, 5, 1, 2};
    const int res = getUniqueElement(arr1);
    std::cout << "Number is : " << res << std::endl;
    std::cout << "Bits are : " << std::bitset<8>(res) << std::endl;
    assert(res == 1);
}
