#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {8, 3, 9, 1, 6};
    cout << "Máximo: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Mínimo: " << *min_element(v.begin(), v.end());
}
