#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    int x = 5;
    if (binary_search(v.begin(), v.end(), x))
        cout << "Encontrado\n";
    else
        cout << "No encontrado\n";
}
