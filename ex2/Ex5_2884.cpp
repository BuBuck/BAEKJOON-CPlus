#include <iostream>

using namespace std;

int main(){
    int h, m;

    cin >> h >> m;

    if (m >= 45) {
        m -= 45;
    } else if (h > 0 && m < 45) {
        h -= 1;
        m = 60 - 45 + m;
    } else if (h == 0 && m < 45){
        h = 23;
        m = 60 - 45 + m;
    }

    cout << h << ' ' << m << '\n';
}