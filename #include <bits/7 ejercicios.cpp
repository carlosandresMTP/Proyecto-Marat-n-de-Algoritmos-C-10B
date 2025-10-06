#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> edad;
    edad["Carlos"] = 14;
    edad["Ana"] = 15;
    for (auto &p : edad)
        cout << p.first << " tiene " << p.second << " años\n";
}
