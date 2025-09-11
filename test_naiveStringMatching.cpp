#include <iostream>
#include "naiveStringMatching.h"
using namespace std;

int main() {
    cout << "\nTask 8: String Pattern Matching (Naive Algorithm)" << endl;
    cout << "================================================" << endl;

    string text = "EMAN1FATIMA2EMAN3FATIMA4";

    // Pattern at the beginning
    cout << "Pattern 'ABAB' found at index: " 
         << naiveStringMatching(text, "EMAN1") << endl;

    // Pattern in the middle
    cout << "Pattern 'ABABC' found at index: " 
         << naiveStringMatching(text, "FATIMA2") << endl;

    // Pattern not present
    cout << "Pattern 'XYZ' found at index: " 
         << naiveStringMatching(text, "EMAN9") << endl;

    // Empty pattern
    cout << "Empty pattern found at index: " 
         << naiveStringMatching(text, "") << endl;

    return 0;
}
