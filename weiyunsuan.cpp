#include<iostream>

using namespace std;

int lowbit(int x);

int main(){
    int n;
    cin>>n;
    while(n--){
        int x,res=0;
        cin>>x;
        while(x!=0){
            x-=lowbit(x);
            res++;
        }
        cout<<res<<' ';
    }
    cout<<endl;
    return 0;
}
// int lowbit(int x)//截取一个数字最后一个1后面的所有位
// {
//     return x&(-x);
// }
// 求n的二进制表示中第k位为几
// eg:n=15=(1111)
// 从右到左依次为0、1、2、3位
// 1、将第k位移到最后一位  n>>k;
// 2、看看个位为几 x&1;
// 即n>>k&1;

// 若求10的二进制
// for(k=3;k>=0;k--) printf("%d",n>>k&1);
