#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 210, INF = 0x3f3f3f3f;
int n, m, k;
int d[N][N];

void floyd();

int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i ++ ) {
        for(int j = 1; j <= n; j ++ ) {
            if(i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }

    for(int i = 0; i < m; i ++ ) {
        int a, b, w;
        cin >> a >> b >> w;
        d[a][b] = min(d[a][b], w);
    }

    floyd();

    for(int i = 0; i < k; i ++ ) {
        int a, b;
        cin >> a >> b;
        if(d[a][b] == 0x3f3f3f3f) puts("impossible");
        else cout << d[a][b] << '\n';
    }

    return 0;
}
void floyd()
{
    for(int k = 1; k <= n; k ++ ) {
        for(int i = 1; i <= n; i ++ ) {
            for(int j = 1; j <= n; j ++ ) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}
