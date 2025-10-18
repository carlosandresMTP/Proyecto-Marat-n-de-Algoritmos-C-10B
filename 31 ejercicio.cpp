// 110. Función que determina si un número es primo
#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int n;
    cin >> n;
    cout << (esPrimo(n) ? "Primo" : "No primo");
    return 0;
}
