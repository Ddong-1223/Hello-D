//Trie树：高效存储与查找字符串集合的数据结构(字典树)
#include<iostream>

using namespace std;
const int N = 1e5 + 10;

int son[N][26], cnt[N], idx;
char str[N];

void insert(char str[]);
int query(char str[]);

int main() {
    int n;
    cin >> n;
    while(n -- ) {
        char op;
        cin >> op >> str;
        if(op == 'I') insert(str);
        else cout << query(str) << endl;
    }
    return 0;
}
void insert(char str[])
{
    int p = 0;
    for(int i = 0; str[i]; i ++ ) {
        int u = str[i] - 'a';//将字母换成对应的数字
        if(!son[p][u]) son[p][u] = ++ idx;//son数组一维存根，二维存该根的值
        p = son[p][u];
    }
    cnt[p] ++ ;
}
int query(char str[])
{
    int p = 0;
    for(int i = 0; str[i]; i ++ ) {
        int u = str[i] - 'a';
        if(!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}
