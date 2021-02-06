#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int n, m;
const int N = 510, M = 1e5 + 10;
int g[N][N];
int dist[N];
bool st[N];

int prim();

int main() {
    cin >> n >> m;
    memset(g, 0x3f, sizeof(g));
    while(m -- ) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = g[b][a] = min(g[a][b], c);
    }

    int t = prim();
    if(t == 0x3f3f3f3f) puts("impossible");
    else cout  << t << '\n';

    return 0;
}
int prim()
{
    memset(dist, 0x3f, sizeof(dist));
    int res = 0;
    for(int i = 0; i < n; i ++ ) {
        int t = -1;
        for(int j = 1; j <= n; j ++ ) {//寻找距离当前集合最小的点
            if(!st[j] && (t == -1 || dist[t] > dist[j])) {
                t = j;
            }
        }
        st[t] = true;
        if(i && dist[t] == 0x3f3f3f3f) return 0x3f3f3f3f;
        if(i) res += dist[t];//先存储该点距离，再更新其他点距离，防止存在自环影响结果
        for(int j = 1; j <= n; j ++ ) dist[j] = min(dist[j], g[t][j]);

    }
    return res;
}
