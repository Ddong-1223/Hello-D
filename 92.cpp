#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N = 20;
bool st[N];
int n;

void dfs(int u);

int main() {
    cin >> n;
    dfs(1);

    return 0;
}
void dfs(int u)
{
    if(u == n + 1) {
        for(int i = 1; i <= n; i ++ ) {
            if(st[i]) cout << i << ' ';
        }
        cout << '\n';
        return;
    }

    st[u] = true;
    dfs(u + 1);
    st[u] = false;
    dfs(u + 1);
}
