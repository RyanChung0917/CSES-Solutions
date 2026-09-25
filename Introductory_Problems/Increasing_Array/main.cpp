#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> vt(n);
    for(int i = 0; i < n; ++i) cin >> vt[i];
    int pre = 0;
    ll moves = 0;
    for(int num : vt){
        if(num >= pre){
            pre = num;
            continue;
        }
        moves += (pre-num);
    }
    cout << moves << "\n";


    return 0;
}