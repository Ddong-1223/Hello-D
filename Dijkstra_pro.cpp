//堆优化Dijkstra
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>

using namespace std;

typedef pair<int, int> PII;

const int N = 2e5 + 10;
int n, m;
int h[N], e[N], ne[N], idx, w[N];//用邻接表存储,w[N]为权重
int dist[N];
bool st[N];

void add(int a, int b, int c);
int dijkstra();

int main() {

    cin >> n >> m;

    memset(h, -1, sizeof(h));

    while(m -- ) {
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c);
    }

    int t = dijkstra();
    cout << t << endl;

    return 0;
}
void add(int a, int b, int c)
{
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx;
    idx ++ ;
}
int dijkstra()
{
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;

    priority_queue<PII, vector<PII>, greater<PII>> heap;//构建一个小根堆
    heap.push({0, 1});//存入1号点（距离为0）
    while(heap.size()) {
        auto t = heap.top();//找到距离最小的点
        heap.pop();

        int distance = t.first, ver = t.second;
        if(st[ver]) continue;//表示已经处理过，直接跳过

        st[ver] = true;
        for(int i = h[ver]; i != -1; i = ne[i]) {
            //用当前点来更新其他点的距离
            int j = e[i];
            if(dist[j] > dist[ver] + w[i]) {
                dist[j] = dist[ver] + w[i];
                heap.push({dist[j], j});//放入队列
            }
        }
    }

    if(dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}
