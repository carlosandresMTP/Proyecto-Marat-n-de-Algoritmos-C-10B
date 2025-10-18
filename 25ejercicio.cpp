// 104. Función que calcula el cuadrado de un número
#include <iostream>
using namespace std;
int cuadrado(int n) {
    return n * n;
}
int main() {
    int x;
    cin >> x;
    cout << "Cuadrado: " << cuadrado(x);
    return 0;
}
