#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N = 15;
int a[N];
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
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i ++ ) {
        if(!st[i]) {
            st[i] = true;
            a[u] = i;
            dfs(u + 1);
            st[i] = false;
        }
    }
}
