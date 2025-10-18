// 105. Función que determina si un número es par
#include <iostream>
using namespace std;
bool esPar(int n) {
    return n % 2 == 0;
}
int main() {
    int x;
    cin >> x;
    cout << (esPar(x) ? "Par" : "Impar");
    return 0;
}
