#include <iostream>

using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    cout << 0 << "\n";

    for(int i = 2; i <= n; ++i){
        ll grid = i*i;
        ll ans = grid*(grid-1)/2 - (i-1)*(i-2)*2*2;
        cout << ans << "\n";
    }

    return 0;
}