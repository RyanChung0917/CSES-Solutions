#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, ans = 1;
    cin >> n;
    for(int i = 0; i < n; ++i){
        ans*=2;
        ans%=MOD;
    }
    cout << ans << "\n";

    return 0;
}