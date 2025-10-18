// 120. Función que imprime una línea decorativa n veces
#include <iostream>
using namespace std;
void linea(int n) {
    for (int i = 0; i < n; i++)
        cout << "-";
}
int main() {
    int n;
    cin >> n;
    linea(n);
    return 0;
}

