#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;

    for (int i = 0; i < flowerbed.size(); i++) {
        if (flowerbed[i] == 0) {
            bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
            bool rightEmpty = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);

            if (leftEmpty && rightEmpty) {
                flowerbed[i] = 1;
                count++;

                if (count >= n)
                    return true;
            }
        }
    }

    return count >= n;
}

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    if (canPlaceFlowers(flowerbed, n))
        cout << "True";
    else
        cout << "False";

    return 0;
}