#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
int n, m;
const int N = 1e5 + 10, M = 2e5 + 10;
int f[N];
struct Edge {
    int a, b, w;

    bool operator< (const Edge &W)const {
        return w < W.w;
    }//用于下面sort排序
}edges[M];

int find(int x);

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i ++ ) {
        int a, b, w;
        cin >> a >> b >> w;
        edges[i] = {a, b, w};
    }

    sort(edges, edges + m);//将所有边排序

    for(int i = 1; i <= n; i ++ ) f[i] = i;

    int res = 0, cnt = 0;
    for(int i = 0; i < m; i ++ ) {
        int a = edges[i].a, b = edges[i].b, w = edges[i].w;
        a = find(a);
        b = find(b);

        if(a != b) {
            f[a] = b;
            res += w;
            cnt ++ ;
        }
    }

    if(cnt < n - 1) puts("impossible");
    else cout << res << '\n';

    return 0;
}
int find(int x)
{
    if(f[x] != x) f[x] = find(f[x]);
    return f[x];
}
