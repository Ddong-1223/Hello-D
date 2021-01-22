#include<iostream>
#include<string>

using namespace std;

const int N=1e6+10;
int q[N], hh, tt;//hh为队头,tt为队尾
int m;

int main() {
    cin >> m;
    while(m--) {
        string op;
        cin >> op;
        if(op == "push") {
            int x;
            cin >> x;
            q[tt ++] = x;
        }
        if(op == "pop") {
            hh++;
        }
        if(op == "empty") {
            if(hh == tt) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        if(op == "query") {
            cout << q[hh] <<endl;
        }

    }
    return 0;
}
