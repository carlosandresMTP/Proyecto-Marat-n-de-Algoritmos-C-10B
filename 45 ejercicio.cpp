// 84. Encontrar el número mayor en un arreglo de 5 elementos
#include <iostream>
using namespace std;
int main() {
    int v[5], mayor;
    for (int i = 0; i < 5; i++) cin >> v[i];
    mayor = v[0];
    for (int i = 1; i < 5; i++)
        if (v[i] > mayor) mayor = v[i];
    cout << "Mayor: " << mayor;
    return 0;
}
