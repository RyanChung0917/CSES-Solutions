#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> weight(n);
    for(int i = 0; i < n; ++i){
        cin >> weight[i];
    }

    int mx = 1 << n;
    ll ans = 1e18;
    for(int i = 0; i <= mx; ++i){
        ll diff = 0;
        for(int j = 0; j < n; ++j){
            if((i >> j) & 1){
                diff += weight[j];
            }else{
                diff -= weight[j];
            }
        }
        ans = min(ans, abs(diff));
    }
    cout << ans << "\n";

    return 0;
}