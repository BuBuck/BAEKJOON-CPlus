#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> basket(n);

    for (int i = 0; i < basket.size(); i++) {
        basket[i] = i + 1;
    }

    int iValue, jValue;
    for (int i = 0; i < m; i++) {
        cin >> iValue >> jValue;
        
        reverse(basket.begin() + iValue - 1, basket.begin() + jValue);
    }

    for (int value : basket) {
        cout << value << ' ';
    }


    return 0;
}