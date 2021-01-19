#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    vector<int> A,B;
    for(int i=0;i<n;i++){
        int c;
        scanf("%d",&c);
        A.push_back(c);
    }
    for(int i=0;i<m;i++){
        int c;
        scanf("%d",&c);
        B.push_back(c);
    }
    for(int i=0,j=m-1;i<n;i++){
        while(j>=0&&A[i]+B[j]>x) j--;
        if(A[i]+B[j]==x) printf("%d %d",i,j);

    }

    return 0;
}
