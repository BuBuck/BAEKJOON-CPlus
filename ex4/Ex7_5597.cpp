#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int>n(31);
    int a;

    for (int i = 0; i < 28; i++) {
        cin >> a;
        n[a] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (!n[i]) cout << i << '\n';
    }

    return 0;
}