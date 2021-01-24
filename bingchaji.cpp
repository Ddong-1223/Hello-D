//每个集合用一棵树来表示，树根编号即为集合编号
//每个节点存储其父节点
#include<iostream>

using namespace std;

const int N = 1e5 + 10;
int p[N];//存储父节点
int n, m;

int find(int x);//返回x的祖宗节点 + 路径压缩

int main() {
    cin >> n >> m;
    for(int i = 0; i <= n; i ++ ) p[i] = i;
    while(m -- ) {
        char op;
        int a, b;
        cin >> op >> a >> b;
        if(op == 'M') p[find(a)] = find(b);
        else {
            if(find(a) == find(b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
int find(int x)
{
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}
