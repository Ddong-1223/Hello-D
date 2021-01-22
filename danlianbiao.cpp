#include<iostream>

using namespace std;

const int N=1e6+10;

int head,e[N],ne[N],idx;
//head表示头结点下标，e[i]为该节点的值,ne[i]为该节点的next指针值,idx代表当前已用到的点

void init();//初始化函数
void add_to_head(int x);//将x插到头结点
void add(int k,int x);//将x插到下标为k的结点后面
void remove(int k);//将下标为k的下一个结点删掉

int main(){
    int m;
    cin>>m;
    init();
    while(m--){
        char op;
        int x,k;
        cin>>op;
        if(op=='H'){
            cin>>x;
            add_to_head(x);
        }
        else if(op=='D'){
            cin>>k;
            if(k==0) head=ne[head];
            else remove(k-1);
        }
        else if(op=='I'){
            cin>>k>>x;
            add(k-1,x);
        }
    }
    for(int i=head;i!=-1;i=ne[i]) cout<<e[i]<<' ';
    cout<<endl;

    return 0;
}
void init()
{
    head=-1;
    idx=0;
}
void add_to_head(int x)
{
    e[idx]=x;
    ne[idx]=head;
    head=idx;
    idx++;
}
void add(int k,int x)
{
    e[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx;
    idx++;
}
void remove(int k)
{
    ne[k]=ne[ne[k]];
}
