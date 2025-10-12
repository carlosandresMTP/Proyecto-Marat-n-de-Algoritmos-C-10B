#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {3,1,2,3,2,4,1};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int x: v) cout<<x<<" ";
    cout<<"\n";
    return 0;
}
