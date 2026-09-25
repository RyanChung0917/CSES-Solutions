#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string dna;
    cin >> dna;

    int cnt = 1, ans = 1;
    for(int i = 1; i < dna.size(); ++i){
        if(dna[i] == dna[i-1]){
            cnt++;
        }else{
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";

    return 0;
}