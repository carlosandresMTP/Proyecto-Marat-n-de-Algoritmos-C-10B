// 85. Encontrar el número menor en un arreglo
#include <iostream>
using namespace std;
int main() {
    int v[5], menor;
    for (int i = 0; i < 5; i++) cin >> v[i];
    menor = v[0];
    for (int i = 1; i < 5; i++)
        if (v[i] < menor) menor = v[i];
    cout << "Menor: " << menor;
    return 0;
}
