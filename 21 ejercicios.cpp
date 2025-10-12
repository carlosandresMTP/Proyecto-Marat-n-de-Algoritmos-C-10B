#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,4,5};
    v.insert(v.begin()+2, 3); // insertar 3 en la posición index 2
    for(int x:v) cout<<x<<" ";
    cout<<"\n";
    return 0;
}
