#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    //((4k+1)+1)*(4k+1)/2 and ((4k+2)+1)*(4k+2)/2 % 2 == 1
    if(n%4 == 1 || n%4 == 2){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    //((4k)+1)*(4k)/4 % 2 == 0
    if(n%4 == 0){
        set<int> a, b;
        for(int i = 1; i <= n; i+=4){
            a.insert(i);
            a.insert(i+3);
            b.insert(i+1);
            b.insert(i+2);
        }
        cout << n/2 << "\n";
        for(int i : a){
            cout << i << " ";
        }
        cout << "\n" << n/2 << "\n";
        for(int i : b){
            cout << i << " ";
        }
    }else{
        set<int> a, b;
        a.insert(1);
        a.insert(2);
        b.insert(3);

        for(int i = 4; i <= n; i+=4){
            a.insert(i);
            a.insert(i+3);
            b.insert(i+1);
            b.insert(i+2);
        }
        cout << n/2 + 1 << "\n";
        for(int i : a){
            cout << i << " ";
        }
        cout << "\n" << n/2 << "\n";
        for(int i : b){
            cout << i << " ";
        }        
    }

    return 0;
}