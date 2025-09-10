#include <iostream>
#include <cassert>
#include "findIndices.h"

void test_findIndices() {
    std::vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
    // for key = 2
    std::vector<int> result1 = findIndices(arr, 2);
    std::vector<int> expected1 = {1, 3, 5};
    assert(result1 == expected1);
    // for key = 4
    std::vector<int> result2 = findIndices(arr, 4);
    std::vector<int> expected2 = {4};
    assert(result2 == expected2);
    // test for when key not in array
    std::vector<int> result3 = findIndices(arr, 10);
    std::vector<int> expected3 = {};
    assert(result3 == expected3);

    std::cout << "✅ All tests passed!\n";
}
int main() {
    test_findIndices();
    return 0;
}
