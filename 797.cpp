#include<iostream>
#include<cstdio>

using namespace std;
const int N=1e6+10;
int a[N],b[N];
//b为a的差分数组，a为b的前缀和数组

void insert(int l,int r,int c);

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        insert(i,i,a[i]);
    }
    while(m--){
        int l,r,c;
        scanf("%d %d %d",&l,&r,&c);
        insert(l,r,c);
    }
    for(int i=1;i<=n;i++){
        b[i]+=b[i-1];
        printf("%d ",b[i]);
    }

    return 0;
}
void insert(int l,int r,int c)
{
    b[l]+=c;
    b[r+1]-=c;
}
