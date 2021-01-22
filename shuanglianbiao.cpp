#include<iostream>
#include<string>

using namespace std;

const int N=1e6+10;
int e[N],l[N],r[N],idx;

void init();//初始化
void add_d(int k, int c);//下标为k右边插入数c
void remove(int k);//删除下标为k的点
void add_l(int k, int c);//下标为k左边插入数c
void l_add(int c);//最左端插入c
void r_add(int c);//最右端插入c

int main() {
    int m;
    cin >> m;
    init();
    while(m--) {
        string op;
        cin >> op;
        if(op == "L") {
            int x;
            cin >> x;
            l_add(x);
            //add_d(0, x);
        }
        if(op == "R") {
            int x;
            cin >> x;
            r_add(x);
        }
        if(op == "D") {
            int k;
            cin >> k;
            remove(k+1);
        }
        if(op == "IL") {
            int k, x;
            cin >> k >> x;
            add_l(k+1, x);
        }
        if(op == "IR") {
            int k, x;
            cin >> k >> x;
            add_d(k+1, x);
        }
    }
    for(int i = r[0]; i != 1; i = r[i]) {
        cout << e[i] << " ";
    }

    return 0;
}
void init()
{
    //令0为头结点，1为尾结点
    r[0] = 1,l[1] = 0;
    idx = 2;
}
void add_d(int k, int c)
{
    e[idx] = c;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx;
    idx++;
}
void remove(int k)
{
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}
void add_l(int k, int c)
{
    e[idx] = c;
    r[idx] = k;
    l[idx] = l[k];
    r[l[k]] = idx;
    l[k] = idx;
    idx++;
}
void l_add(int c)//最左
{
    e[idx] = c;
    r[idx] = r[0];
    l[idx] = 0;
    l[r[0]] = idx;
    r[0] = idx;
    idx++;
}
void r_add(int c)//最右
{
    e[idx] = c;
    r[idx] = 1;
    l[idx] = l[1];
    r[l[1]] = idx;
    l[1] = idx;
    idx++;
}
