#include <iostream>

using namespace std;

int main(){
    int num;

    cin >> num;

    int max = num;

    for (int i = 1; i < max; i++) {
        num += i;
    }

    cout << num << '\n';
}