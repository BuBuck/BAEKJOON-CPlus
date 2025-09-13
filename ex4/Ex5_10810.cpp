#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int iNum, jNum, kNum;

    vector<int>basket(n);
    for (int i = 0; i < m; i++) {
        cin >> iNum >> jNum >> kNum;

        for (int j = iNum - 1; j < jNum; j++) {
            basket[j] = kNum;
        }
    }

    for (int i = 0; i < basket.size(); i++) {
        cout << basket[i] << ' ';
    }

    cout << '\n';
}