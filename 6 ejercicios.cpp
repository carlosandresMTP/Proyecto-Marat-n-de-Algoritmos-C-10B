#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 3, 3};
    cout << "Número 3 aparece " << count(v.begin(), v.end(), 3) << " veces.";
}
