// 86. Contar cuántos números positivos hay en un arreglo
#include <iostream>
using namespace std;
int main() {
    int v[10], cont = 0;
    for (int i = 0; i < 10; i++) cin >> v[i];
    for (int i = 0; i < 10; i++)
        if (v[i] > 0) cont++;
    cout << "Positivos: " << cont;
    return 0;
}
