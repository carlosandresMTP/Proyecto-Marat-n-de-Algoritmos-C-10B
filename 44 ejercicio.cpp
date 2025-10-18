// 83. Calcular el promedio de 5 números almacenados en un arreglo
#include <iostream>
using namespace std;
int main() {
    float v[5], suma = 0;
    for (int i = 0; i < 5; i++) cin >> v[i];
    for (int i = 0; i < 5; i++) suma += v[i];
    cout << "Promedio: " << suma / 5;
    return 0;
}
