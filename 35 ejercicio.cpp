// 114. Función que calcula la potencia de un número
#include <iostream>
using namespace std;
int potencia(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++)
        res *= base;
    return res;
}
int main() {
    int b, e;
    cin >> b >> e;
    cout << potencia(b, e);
    return 0;
}
