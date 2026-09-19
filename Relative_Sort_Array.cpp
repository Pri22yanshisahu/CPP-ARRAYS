#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    vector<bool> used(arr1.size(), false);

    for (int x : arr2) {
        for (int i = 0; i < arr1.size(); i++) {
            if (!used[i] && arr1[i] == x) {
                result.push_back(arr1[i]);
                used[i] = true;
            }
        }
    }

    vector<int> remaining;

    for (int i = 0; i < arr1.size(); i++) {
        if (!used[i]) {
            remaining.push_back(arr1[i]);
        }
    }

    sort(remaining.begin(), remaining.end());

    for (int x : remaining) {
        result.push_back(x);
    }

    return result;
}

int main() {
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};

    vector<int> result = relativeSortArray(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}