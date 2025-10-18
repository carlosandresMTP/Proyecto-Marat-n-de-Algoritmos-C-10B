// 82. Leer 10 números y mostrar solo los pares
#include <iostream>
using namespace std;
int main() {
    int v[10];
    for (int i = 0; i < 10; i++) cin >> v[i];
    for (int i = 0; i < 10; i++)
        if (v[i] % 2 == 0) cout << v[i] << " ";
    return 0;
}
