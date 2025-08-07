#include <iostream>

using namespace std;

int main(){
    long long x;
    long long temp = 0;
    int n, a, b;

    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        temp += (a * b);
    }

    if (x == temp) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}