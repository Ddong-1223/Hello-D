#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef pair<int,int> PII;

const int N=3e6+10;
int a[N],s[N];//a数组存数据,s为前缀和
vector<int> alls;//存储需要离散化的值
vector<PII> add,query;

int find(int x);

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x,c;
        cin>>x>>c;
        add.push_back({x,c});
        alls.push_back(x);
    }
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        query.push_back({l,r});
        alls.push_back(l);
        alls.push_back(r);
    }

    //去重
    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()),alls.end());
    //unique删除重复元素
    //接着删除新数组末尾到原数组末尾中间的数组

    //处理插入
    for(auto item:add){
        int x=find(item.first);
        a[x]+=item.second;//离散后的坐标值上加c
    }

    //预处理前缀和
    for(int i=1;i<=alls.size();i++){
        s[i]=s[i-1]+a[i];
    }

    for(auto item:query){
        int l=find(item.first),r=find(item.second);
        cout<<s[r]-s[l-1]<<endl;
    }


    return 0;
}
int find(int x)//寻找原数组的值，经过离散操作后的值
{
    int l=0,r=alls.size()-1;
    while(l<r){
        int mid=l+r>>1;
        if(alls[mid]>=x) r=mid;
        else l=mid+1;
    }
    return r+1;//底标从1开始
}
