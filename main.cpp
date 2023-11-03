#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Function to get the sum of vector elements
int getSum(const vector<int>& vec) {
    return accumulate(vec.begin(), vec.end(), 0);
}

// Function to get the average of vector elements
double getAverage(const std::vector<int>& vec) {
    if (vec.empty()) return 0.0;
    return static_cast<double>(getSum(vec)) / vec.size();
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The sum is: " << getSum(numbers) << endl;

    cout << "The average is: " << getAverage(numbers) << endl;

    return 0;
}
