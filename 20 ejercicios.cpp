#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    double avg = accumulate(v.begin(), v.end(), 0.0) / v.size();
    cout<<fixed<<setprecision(2)<<avg<<"\n";
    return 0;
}
