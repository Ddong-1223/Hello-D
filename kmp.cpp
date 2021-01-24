#include<iostream>

using namespace std;

const int N = 1e5 + 10, M = 1e6 + 10;
int n, m;
char p[N], s[M];//使用时从1开始使用
int ne[N];

int main() {
    cin >> n >> p + 1 >> m >> s + 1;
    for (int i = 2, j = 0; i <= n; i ++ ) {
        while(j && p[i] != p[j + 1]) j = ne[j];//无法匹配时,j回退
        if(p[i] == p[j + 1]) j ++ ;
        ne[i] = j;
    }
    for(int i = 1, j = 0; i <= m; i ++ ) {
        while(j && s[i] != p[j + 1]) j = ne[j];//主模板与模式串不匹配时，模式串回退
        if(s[i] == p[j + 1]) j ++ ;
        if(j == n) {
            cout << i - n << ' ';
            j = ne[j];
        }
    }
    return 0;
}
