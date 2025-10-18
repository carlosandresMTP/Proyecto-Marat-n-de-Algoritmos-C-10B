// 107. Función que calcula el área de un triángulo
#include <iostream>
using namespace std;
float areaTriangulo(float b, float h) {
    return (b * h) / 2;
}
int main() {
    float base, altura;
    cin >> base >> altura;
    cout << "Area: " << areaTriangulo(base, altura);
    return 0;
}
