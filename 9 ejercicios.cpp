#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> cola;
    cola.push("uno");
    cola.push("dos");
    cola.push("tres");
    while (!cola.empty()) {
        cout << cola.front() << endl;
        cola.pop();
    }
}
