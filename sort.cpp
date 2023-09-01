#sort the 2D vector by ith elements of the vector.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Sample vector of boxTypes
    std::vector<std::vector<int>> boxTypes = {{1, 3}, {2, 2}, {3, 1}};

    // Sorting boxTypes based on the second element in each vector
    std::sort(boxTypes.begin(), boxTypes.end(), [](auto& a, auto& b) {
        return a[1] > b[1];
    });

    // Display the sorted vector
    for (const auto& box : boxTypes) {
        std::cout << "[" << box[0] << ", " << box[1] << "] ";
    }

    return 0;
}
