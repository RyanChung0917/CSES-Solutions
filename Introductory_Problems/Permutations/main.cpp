#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    if(n == 1){
        cout << "1\n";
        return 0;
    }
    if(n == 2 || n == 3){
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    for(int i = 1; i <= n/2; ++i){
        cout << i*2 << " ";
    }
    for(int i = 1; i <= (n+1)/2; ++i){
        cout << i*2-1 << " ";
    }
    

    return 0;
}