//朴素Dijkstra
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 510;
int n, m;
int g[N][N];//用邻接矩阵来存储距离，eg:g[i][j]表示i到j的距离
int dist[N];//当前最短距的距离
bool st[N];//判断每个点的最短路是否已经确定

int dijkstra();

int main() {

    cin >> n >> m;

    memset(g, 0x3f, sizeof(g));

    while(m -- ) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = min(g[a][b], c);//对于重复的只取距离最小值
    }

    int t = dijkstra();
    cout << t << endl;

    return 0;
}
int dijkstra()
{
    memset(dist, 0x3f, sizeof(dist));

    dist[1] = 0;
    for(int i = 0; i < n; i ++ ) {
        int t = -1;//找出当前未确定最短距离的点中，距离原点最小的点，t = -1为初始化
        for(int j = 1; j <= n; j ++ ) {
            if(!st[j] && (t == -1 || dist[t] > dist[j]))
            //当前点未确定最短路，并且t点不为最短的点，则更新t为j
                t = j;
        }

        st[t] = true;//表示t点已确定最短距离

        for(int j = 1; j <= n; j ++ )
            dist[j] = min(dist[j], dist[t] + g[t][j]);//用t到各点的距离更新其他没有确定的点

    }
    if(dist[n] == 0x3f3f3f3f) return -1;//表示不连通
    return dist[n];
}
