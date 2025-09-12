#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums(9);
    cin >> nums[0];
    int max = nums[0];
    int arrNum = 0;

    for (int i = 1; i < nums.size(); i++) {
        cin >> nums[i];

        if (nums[i] > max) {
            max = nums[i];
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        if (max == nums[i]) {
            arrNum = i + 1;
            break;
        }
    }

    cout << max << '\n' << arrNum << '\n';
}