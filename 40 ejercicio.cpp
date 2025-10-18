// 119. Función que convierte segundos a minutos y horas
#include <iostream>
using namespace std;
void convertirTiempo(int s) {
    int h = s / 3600;
    int m = (s % 3600) / 60;
    int seg = s % 60;
    cout << h << "h " << m << "m " << seg << "s";
}
int main() {
    int s;
    cin >> s;
    convertirTiempo(s);
    return 0;
}
