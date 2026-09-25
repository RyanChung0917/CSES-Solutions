#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cnt = 0;
vector<char> letter;
vector<string> ans;

void backtracking(string str, vector<bool> used){
    if(str.size() == letter.size()){
        cnt++;
        ans.push_back(str);
        return;
    }

    for(int i = 0; i < letter.size(); ++i){
        if(used[i]) continue;
        if(i > 0 && letter[i] == letter[i-1] && !used[i-1]) continue;

        str.push_back(letter[i]);
        used[i] = true;
        backtracking(str, used);
        str.pop_back();
        used[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string input;
    cin >> input;
    for(char c : input) letter.push_back(c);
    sort(letter.begin(), letter.end());

    vector<bool> used(input.size(), false);
    backtracking("", used);

    cout << cnt << "\n";
    for(string s : ans) cout << s << "\n";

    return 0;
}