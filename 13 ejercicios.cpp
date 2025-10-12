#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {5,10,3,7};
    long long s = accumulate(v.begin(), v.end(), 0LL);
    cout<<s<<"\n";
    return 0;
}
