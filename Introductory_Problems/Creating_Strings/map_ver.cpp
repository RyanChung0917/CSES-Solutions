#include <bits/stdc++.h>

using namespace std;

int sz;

void dfs(map<char, int> &cnt, string cur){
    if(cur.size() == sz){
        cout << cur << "\n";
        return;
    }

    for(auto &[c, num] : cnt){
        if(num == 0) continue;

        cur.push_back(c);
        num--;
        dfs(cnt, cur);
        cur.pop_back();
        num++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string input;
    cin >> input;
    sz = input.size();
    map<char, int> cnt;
    for(char c : input){
        cnt[c]++;
    }

    int total = 1;
    for(int i = 2; i <= input.size(); ++i) total *= i;
    for(char ch = 'a'; ch <= 'z'; ++ch){
        if(cnt.find(ch) != cnt.end()){
            for(int i = 2; i <= cnt[ch]; ++i){
                total /= i;
            }
        }
    }
    cout << total << "\n";

    dfs(cnt, "");

    return 0;
}