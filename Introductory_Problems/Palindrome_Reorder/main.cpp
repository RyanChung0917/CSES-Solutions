#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string input;
    cin >> input;
    map<char, int> counter;
    for(char c : input){
        counter[c]++;
    }
    
    string left = "", mid = "";
    bool hasMid = false;
    for(char c = 'A'; c <= 'Z'; ++c){
        left += string(counter[c]/2, c);
        if(counter[c]%2 == 1){
            if(hasMid){
                cout << "NO SOLUTION\n";
                return 0;
            }
            mid = c;
            hasMid = true;
        }
    }

    string ans = left + mid;
    reverse(left.begin(), left.end());
    ans += left;
    cout << ans << "\n";

    return 0;
}