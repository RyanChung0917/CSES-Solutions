#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, l, r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        if((r*2-l) >= 0 && (r*2-l)%3 == 0 && (l*2-r) >= 0 && (l*2-r)%3 == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
//2x+y=l, x+2y=r => x = (2l-r)/3, y = (2r-l)/3