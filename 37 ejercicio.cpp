
// 116. Función que retorna el valor absoluto
#include <iostream>
using namespace std;
int absoluto(int n) {
    return (n < 0) ? -n : n;
}
int main() {
    int n;
    cin >> n;
    cout << absoluto(n);
    return 0;
}
