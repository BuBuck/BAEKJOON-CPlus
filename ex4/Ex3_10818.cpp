#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int>nums(n);
    cin >> nums[0];

    int min = nums[0];
    int max = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        cin >> nums[i];

        if (nums[i] < min) min = nums[i];
        if (nums[i] > max) max = nums[i];
    }
    
    cout << min << ' ' << max << '\n';
}