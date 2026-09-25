#include <iostream>

using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    ll y, x;
    cin >> t;
    while(t--){
        cin >> y >> x;
        ll layer = max(y, x), diff, ans;
        if(layer%2 == 0){
            diff = abs(y-layer) + abs(x-1);
        }else{
            diff = abs(y-1) + abs(x-layer);
        }
        ans = layer*layer - diff;
        cout << ans << "\n";
    }

    return 0;
}