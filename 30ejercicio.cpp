// 109. Función que convierte grados Celsius a Fahrenheit
#include <iostream>
using namespace std;
float convertir(float c) {
    return (c * 9 / 5) + 32;
}
int main() {
    float c;
    cin >> c;
    cout << convertir(c);
    return 0;
}
