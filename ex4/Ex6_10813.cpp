#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    vector<int> basket(n);

    basket[0] = 1;
    for (int i = 1; i < basket.size(); i++) {
        basket[i] = basket[i - 1] + 1;
    }

    for (int i = 0; i < m; i++) {
        int iNum, jNum, temp;

        cin >> iNum >> jNum;

        temp = basket[iNum - 1];
        basket[iNum - 1] = basket[jNum - 1];
        basket[jNum - 1] = temp;
    }

    for (int i = 0; i < basket.size(); i++) {
        cout << basket[i] << ' ';
    }

    cout << '\n';

    return 0;
}