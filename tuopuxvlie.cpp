//DAG(有向无环图)一定有拓扑序列
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 1e5 + 10;
int h[N], e[N], ne[N], idx;
int q[N], d[N];//d[N]为点的入度
int n, m;

void add(int a, int b);
bool topsort();

int main() {
    cin >> n >> m;
    memset(h, -1, sizeof(h));
    for(int i = 0; i < m; i ++ ) {
        int a, b;
        cin >> a >> b;
        add(a, b);
        d[b] ++ ;
    }

    if(topsort()) {
        for(int i = 0; i < n; i ++ ) cout << q[i] << " ";
    }
    else puts("-1");

    return 0;
}
void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
    idx ++ ;
}
bool topsort()
{
    int hh = 0, tt = -1;
    for(int i = 1; i <= n; i ++ ) {
        if(!d[i])
            q[ ++ tt] = i;//入度为0的点插入数组
    }
    while(hh <= tt) {
        int t = q[hh ++ ];
        for(int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            d[j] -- ;
            if(d[j] == 0) q[ ++ tt] = j;
        }
    }

    return tt == n - 1;
}
