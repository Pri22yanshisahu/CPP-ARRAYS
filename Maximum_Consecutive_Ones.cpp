#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maximum = 0;

    for (int num : nums) {
        if (num == 1) {
            count++;
            maximum = max(maximum, count);
        } else {
            count = 0;
        }
    }

    return maximum;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum Consecutive Ones: " << findMaxConsecutiveOnes(nums);

    return 0;
}