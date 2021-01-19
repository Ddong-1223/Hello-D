#include<iostream>
#include<cstdio>

using namespace std;

const int N=1e6+10;
int a[N],s[N];
//s[N]用来表示该数在区间内出现次数，类似桶排中的数组

int main(){
    int n,res=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0,j=0;i<n;i++){
        s[a[i]]++;
        while(s[a[i]]>1){
            s[a[j]]--;
            j++;//左边边界的j指针向右移
        }
        res=max(res,i-j+1);
    }
    printf("%d",res);

    return 0;
}
