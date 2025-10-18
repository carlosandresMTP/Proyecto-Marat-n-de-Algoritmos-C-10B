// 117. Función que calcula el máximo común divisor (MCD)
#include <iostream>
using namespace std;
int mcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << "MCD: " << mcd(x, y);
    return 0;
}
