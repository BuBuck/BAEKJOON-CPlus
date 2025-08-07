#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    
    cin >> n;

    int *nums = new int[n];
    int v;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> v;

    for (int i = 0; i < n; i++) {
        if (nums[i] == v) {
            count++;
        }
    }

    cout << count << '\n';
}