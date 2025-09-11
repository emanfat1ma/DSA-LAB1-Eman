#include "findIndices.h"

std::vector<int> findIndices(const std::vector<int>& arr, int key) {
    std::vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}
