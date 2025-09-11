#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a given element
vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

// Forward declaration (so main can use it)
void printVector(const vector<int>& v);

// Unit test function
void test_findIndices() {
    vector<int> arr1 = {1, 2, 3, 2, 4, 2, 5};
    cout << "Array: {1,2,3,2,4,2,5}, Key = 2 ";
    printVector(findAllIndices(arr1, 2));  // Expected {1,3,5}

    cout << "Array: {1,2,3,2,4,2,5}, Key = 6 ";
    printVector(findAllIndices(arr1, 6));  // Expected {}

    vector<int> arr2 = {};
    cout << "Array: {}, Key = 1 ";
    printVector(findAllIndices(arr2, 1));  // Expected {}
}

// Helper function to print vector of indices
void printVector(const vector<int>& v) {
    if (v.empty()) {
        cout << "{}";
    } else {
        cout << "{ ";
        for (int idx : v) cout << idx << " ";
        cout << "}";
    }
    cout << endl;
}

int main() {
    cout << "Task: Find All Indices of an Element\n";
    cout << "=====================================\n";
    test_findIndices();
    return 0;
}
