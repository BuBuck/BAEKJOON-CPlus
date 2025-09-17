#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int>a(10);
    vector<int>b(42);
    int count = 0;

    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }

    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (i == a[j] % 42) {
                b[i]++;
            }
        }

        if (b[i] > 0) count++;
    }

    cout << count;

    return 0;
}