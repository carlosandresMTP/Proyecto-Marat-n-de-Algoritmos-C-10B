#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {4,2,5,1,3};
    sort(v.rbegin(), v.rend());
    for(int x: v) cout<<x<<" ";
    cout<<"\n";
    return 0;
}
