#include <iostream>

using namespace std;

void hanoi(int num, char from, char to, char other){
    if(num == 1){
        cout << from << " " << to << "\n";
        return;
    }

    hanoi(num-1, from, other, to);
    hanoi(1, from, to, other);
    hanoi(num-1, other, to, from);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int moves = (1 << n) - 1;
    cout << moves << "\n";
    hanoi(n, '1', '3', '2');
    
    return 0;
}