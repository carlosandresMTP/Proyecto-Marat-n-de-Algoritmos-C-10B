// 115. Función que cuenta cuántos dígitos tiene un número
#include <iostream>
using namespace std;
int contarDigitos(int n) {
    int cont = 0;
    do {
        n /= 10;
        cont++;
    } while (n > 0);
    return cont;
}
int main() {
    int n;
    cin >> n;
    cout << "Digitos: " << contarDigitos(n);
    return 0;
}
