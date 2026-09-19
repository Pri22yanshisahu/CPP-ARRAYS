#include <iostream>
#include <vector>
#include <set>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> s;

    for (int num : nums) {
        s.insert(num);

        if (s.size() > 3) {
            s.erase(s.begin());
        }
    }

    if (s.size() == 3)
        return *s.begin();

    return *s.rbegin();
}

int main() {
    vector<int> nums = {3, 2, 1};

    cout << "Third Maximum: " << thirdMax(nums);

    return 0;
}