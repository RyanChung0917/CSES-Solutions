#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> ans = {"0", "1"};
    
    for(int t = 0; t < n-1; ++t){
        vector<string> nxt;
        for(int i = 0; i < ans.size(); ++i){
            nxt.push_back("0" + ans[i]);
        }
        for(int i = ans.size()-1; i >= 0; --i){
            nxt.push_back("1" + ans[i]);
        }
        ans = nxt;
    }
    
    for(string str : ans){
        cout << str << "\n";
    }

    return 0;
}