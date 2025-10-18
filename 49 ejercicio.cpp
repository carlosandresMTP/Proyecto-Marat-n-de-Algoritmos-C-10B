// 88. Leer 10 números y mostrar solo los múltiplos de 3
#include <iostream>
using namespace std;
int main() {
    int v[10];
    for (int i = 0; i < 10; i++) cin >> v[i];
    for (int i = 0; i < 10; i++)
        if (v[i] % 3 == 0) cout << v[i] << " ";
    return 0;
}
