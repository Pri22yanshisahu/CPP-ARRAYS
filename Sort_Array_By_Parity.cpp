#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        if (nums[left] % 2 == 0) {
            left++;
        } else if (nums[right] % 2 != 0) {
            right--;
        } else {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

    return nums;
}

int main() {
    vector<int> nums = {3, 1, 2, 4};

    sortArrayByParity(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}