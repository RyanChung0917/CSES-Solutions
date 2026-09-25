#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    ll ans = 0;
    while(n > 0){
        n /= 5;
        ans += n;
    }

    cout << ans << "\n";

    return 0;
}