// 103. Función que suma dos números
#include <iostream>
using namespace std;
int sumar(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << "Suma: " << sumar(x, y);
    return 0;
}
