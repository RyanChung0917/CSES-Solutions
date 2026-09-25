#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<bool> num(n+1, false);
    int x;
    for(int i = 0; i < n-1; ++i){
        cin >> x;
        num[x] = true;
    }
    for(int i = 1; i <= n; ++i){
        if(!num[i]){
            cout << i;
            return 0;
        }
    }

    return 0;
}