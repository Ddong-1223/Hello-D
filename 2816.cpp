#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int n,m,flag=0;
    scanf("%d %d",&n,&m);
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        scanf("%d",&x);
        b.push_back(x);
    }
    for(int i=0,j=0;j<m;j++){

        if(a[i]==b[j]){
            i++;
        }
        if(i==n) flag=1;
    }
    if(flag==1) printf("Yes");
    else printf("No");
    return 0;
}
