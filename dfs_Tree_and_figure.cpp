#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int  N =1e5 + 10;
int n;
int h[N], e[N], ne[N], idx;
bool st[N];
int ans = N;//最小的 最大值

void add(int a, int b);
int dfs(int u);//返回以u为根的子树的大小


int main() {
    cin >> n;
    memset(h, -1, sizeof(h));

    for(int i = 0; i < n - 1; i ++ ) {
        int a, b;
        cin >> a >> b;
        add(a, b), add(b, a);
    }

    dfs(1);

    cout << ans << endl;
    return 0;
}
void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
    idx ++ ;


}
int dfs(int u)
{
    st[u] = true;//已经被搜索过
    int sum = 1, res = 0;//sum初始等于1代表该个根节点， res代表子树 及 除根节点及子树之外的部分 的最大值
    for(int i = h[u]; i != -1; i = ne[i]) {
        int j = e[i];
        if(!st[j]) {
            int s = dfs(j);//当前子树的大小
            res = max(res, s);
            sum += s;
        }
    }
    res = max(res, n - sum);//判断 子树 及 除根节点及子树之外的部分  ,取最大值

    ans = min(ans, res);

    return sum;
}
