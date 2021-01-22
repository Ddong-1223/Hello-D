#include<iostream>
#include<string>

using namespace std;

const int N=1e6+10;

int stk[N], tt;//tt代表栈顶坐标
int m;

int main() {
    cin >> m;
    while(m--) {
        string op;
        cin >> op;
        if(op == "push") {
            int x;
            cin >> x;
            stk[ ++ tt] = x;
        }
        if(op == "pop") {
            tt--;
        }
        if(op == "empty") {
            if(tt == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        if(op == "query") cout << stk[tt] << endl;

    }
    return 0;
}
