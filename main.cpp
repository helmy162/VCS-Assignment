#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Function to get the sum of vector elements
int getSum(const vector<int>& vec) {
    return accumulate(vec.begin(), vec.end(), 0);
}

// Function to get the minimum value in the vector
int getMin(const std::vector<int>& vec) {
    if (vec.empty()) return INT_MAX; // Return max int value if vector is empty
    return *min_element(vec.begin(), vec.end());
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The sum is: " << getSum(numbers) << endl;

    cout << "The minimum is: " << getMin(numbers) << std::endl;

    return 0;
}
