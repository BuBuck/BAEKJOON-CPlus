#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;

    cin >> n1 >> n2;

    int digit = 10;

    for (int i = 0; i < 3; i++){
        if (digit == 10){
            n3 = n2 % digit;
        } else if (digit == 100){
            n3 = (n2 % digit) / 10;
        } else if (digit == 1000) {
            n3 = (n2 % digit) / 100;
        }

        digit *= 10;
        n3 *= n1;
        
        cout << n3 << '\n';
    }

    cout << n1 * n2 << '\n';

    return 0;
}