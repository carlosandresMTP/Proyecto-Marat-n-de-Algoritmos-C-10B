// 89. Calcular la suma de los elementos de un arreglo
#include <iostream>
using namespace std;
int main() {
    int v[5], suma = 0;
    for (int i = 0; i < 5; i++) cin >> v[i];
    for (int i = 0; i < 5; i++) suma += v[i];
    cout << "Suma: " << suma;
    return 0;
}
