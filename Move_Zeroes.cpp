#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int k = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    while (k < nums.size()) {
        nums[k] = 0;
        k++;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}