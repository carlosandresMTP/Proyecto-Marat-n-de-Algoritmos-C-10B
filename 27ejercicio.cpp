// 106. Función que retorna el mayor de dos números
#include <iostream>
using namespace std;
int mayor(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << "Mayor: " << mayor(x, y);
    return 0;
}
