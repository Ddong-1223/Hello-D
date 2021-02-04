#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

const int N = 1e5 + 10;
int h[N], e[N], w[N], ne[N], idx;
int dist[N];
bool st[N];
int n, m;

void add(int x, int y, int z);
int spfa();

int main() {
    cin >> n >> m;
    memset(h, -1, sizeof(h));
    for(int i = 0; i < m; i ++ ) {
        int x, y, z;
        cin >> x >> y >> z;
        add(x, y, z);
    }

    int t = spfa();
    if(t == -1) puts("impossible");
    else cout << t << '\n';

    return 0;
}
void add(int x, int y, int z)
{
    e[idx] = y;
    w[idx] = z;
    ne[idx] = h[x];
    h[x] = idx ++ ;
}
int spfa()
{
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;

    queue<int> q;//存储待更新的点
    q.push(1);
    st[1] = true;

    while(q.size()) {
        int t = q.front();
        q.pop();
        st[t] = false;

        for(int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if(dist[j] > dist[t] + w[i]) {
                dist[j] = dist[t] + w[i];
                if(!st[j]) {
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }

    if(dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}
