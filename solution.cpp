#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;https://github.com/sunnytsai3346/leetcode624/tree/main

int maxDistance(vector<vector<int>>& arrays) {
    // Initialize variables to store the minimum and maximum values found so far.
    int result = 0;
    int min_val = arrays[0][0];
    int max_val = arrays[0].back();
    
    // Iterate through the arrays starting from the second one.
    for (int i = 1; i < arrays.size(); ++i) {
        // Calculate the maximum distance considering current min_val and max_val.
        result = max(result, abs(arrays[i].back() - min_val));
        result = max(result, abs(max_val - arrays[i][0]));
        
        // Update min_val and max_val for the next iteration.
        min_val = min(min_val, arrays[i][0]);
        max_val = max(max_val, arrays[i].back());
    }
    
    return result;
}

int main() {
    vector<vector<int>> arrays = {{1, 2, 3}, {4, 5}, {1, 2, 3}};
    cout << "Maximum Distance: " << maxDistance(arrays) << endl;
    return 0;
}
