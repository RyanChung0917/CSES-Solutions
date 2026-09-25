#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        if(a+b > n || (a == 0 && b > 0) || (a > 0 && b == 0)){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        
        for(int i = 1; i <= n; ++i){
            cout << i << " ";
        }
        cout << "\n";
        if(a == 0 && b == 0){
            for(int i = 1; i <= n; ++i){
                cout << i << " ";
            }
        }else{
            for(int i = 1+a; i <= a+b; ++i){
                cout << i << " ";
            }
            for(int i = 1; i < 1+a; ++i){
                cout << i << " ";
            }
            for(int i = a+b+1; i <= n; ++i){
                cout << i << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}