#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N = 510, M = 1e5 + 10;
int h[N], e[M], ne[M], idx;
int match[N];//表示当前右边的点已经匹配的所对应左边的点
bool st[N];
int n1, n2, m;

void add(int a, int b);
bool find(int x);

int main() {
    cin >> n1 >> n2 >> m;
    memset(h, -1, sizeof(h));

    for(int i = 0; i < m; i ++ ) {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }

    int res = 0;
    for(int i = 1; i <= n1; i ++ ) {
        memset(st, false, sizeof(st));
        if(find(i)) res ++ ;
    }

    cout << res << '\n';

    return 0;
}
void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx ++ ;
}
bool find(int x)
{
    for(int i = h[x]; i != -1; i = ne[i]) {
        int j = e[i];
        if(!st[j]) {
            st[j] = true;
            if(match[j] == 0 || find(match[j])) {
                match[j] = x;
                return true;
            }
        }
    }
    return false;
}
