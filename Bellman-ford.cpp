#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 510, M = 1e5 + 10;
int n, m, k;
int dist[N], backup[N];//back[]为备份数组

struct Edge {
    int a, b, w;
}edges[M];

int bellman_ford();

int main() {
    cin >> n >> m >> k;
    for(int i = 0; i < m; i ++ ) {
        int a, b, w;
        cin >> a >> b >> w;
        edges[i] = {a, b, w};
    }


    int t = bellman_ford();

    if(t == -1) puts("impossible");
    else cout << t << '\n';


}
int bellman_ford()
{
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;
    for(int i = 0; i < k; i ++) {//不超过K条边的最短路，则迭代K次
        memcpy(backup, dist, sizeof(dist));//每次新的迭代前，将dist数组备份

        for(int j = 0; j < m; j ++ ) {
            int a = edges[j].a, b = edges[j].b, w = edges[j].w;
            dist[b] = min(dist[b], backup[a] + w);
        }
    }
    if(dist[n] > 0x3f3f3f3f / 2) return -1;
    return dist[n];
}
