#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int count = 0;

    for (int num : nums) {
        int digits = 0;

        while (num > 0) {
            num /= 10;
            digits++;
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << "Numbers with even digits: " << findNumbers(nums);

    return 0;
}