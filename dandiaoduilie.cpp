#include<iostream>
#include<cstdio>

using namespace std;

const int N=1e6 + 10;
int a[N], q[N];//q为队列,存储下标值

int main() {
    int n, k;
    scanf("%d %d",&n, &k);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int hh = 0, tt = -1;
    for(int i = 0; i < n; i++) {
        if(hh <= tt && i - k + 1 > q[hh]) hh ++ ;
        //判断队头是否已经滑出窗口
        while(hh <= tt && a[q[tt]] >= a[i]) tt -- ;

        q[ ++ tt] = i;
        if(i >= k - 1) printf("%d ", a[q[hh]]);
    }

    printf("\n");

    hh = 0, tt = -1;
    for(int i = 0; i < n; i ++ ) {
        if(hh <= tt && i - k + 1 > q[hh]) hh ++ ;
        while(hh <= tt && a[q[tt]] <= a[i]) tt -- ;

        q[ ++ tt] =i;
        if(i >= k - 1) printf("%d ", a[q[hh]]);
    }

    return 0;
}
