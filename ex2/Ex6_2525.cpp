#include <iostream>

using namespace std;

int main(){
    int a, b, c ;

    cin >> a >> b >> c ;

    a *= 60;

    a = a + b + c;

    b = a % 60;
    a = a / 60;

    if (a >= 24) a -= 24;

    cout << a << ' ' << b << '\n';

    return 0;
}