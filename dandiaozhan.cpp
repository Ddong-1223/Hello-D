#include<iostream>

using namespace std;

const int N = 1e6+10;
int stk[N], tt;
int n;

int main() {
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        while(tt && stk[tt] >= x) tt--;//当栈顶元素比下一个数大时，之后不会再用到，直接删除即可（*为了保证栈的单调性）
        if(tt) cout << stk[tt] << ' ';
        else cout << "-1" << ' ';
        stk[ ++ tt] = x;
    }
    return 0;
}
