/*
vector  变长数组，倍增的思想
pair 底层为结构体
string字符串
queue 队列
priority_queue 优先队列（堆）
stack 栈
deque 双端队列
set, map, multiset, multimap  基于平衡二叉树实现（红黑树），动态维护有序序列
unordered_set, unordered_map, unordered_multiset, unordered_multimap 基于哈希表实现
bitset 压位
*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>

using namespace std;

int main() {
//vector:

    /*
    vector<int> a(10,3);//定义数组长度为10，且每个数均为3
    vector<int> a[10];//定义10个vector数组

    vector<int> a;
    int b = a.size()；//a的元素个数
    a.empty()//a是否为空,返回bool类型（true or false）
    clear()//清空
    front()//返回第一个数
    back()//返回最后一个数
    push_back()//向最后插入一个数
    pop_back()//最后删除一个数
    begin(),end()//迭代器，end()为最后一个数的下一个数
    //支持随机寻址 []

    */

    /*
    vector<int> a;
    for(int i = 0; i < 10; i ++ ) a.push_bck(i);
    遍历：
    for(int i = 0; i < a.size(); i ++ ) cout << a[i] << " ";
    cout << endl;

    for(vector<int>::iterator i = a.begin(); i != a.end(); i ++ ) cout << a[i] << " ";
    cout << endl;
    // vector<int>::iterator  可换为 auto

    for(auto x : a) cout << x << " ";
    cout << endl;
    */

    //支持比较运算，按字典序比较




//pair:

    /*
    pair<int, int> a;
    a.first
    a.second
    pair<int, string> p;
    p = make_pair(10, "def");
    p = {20, "abc"};

    pair<int, pair<int, int>> b;//存储三个内容
    */

    //支持比较运算，first为第一关键字，second为第二关键字



//string:

    /*
    size();  length();
    empty();
    clear();
    substr(a, l); //a为起始下标,l为长度   若超出字符串，则只会输出到末尾  （l可省略，直接输出到末尾）
    */

    /*
    string a = "abc";
    a += "def";
    a += 'g';
    cout << a << endl;
    printf("%s\n", a.c_str());
    cout << a.substr(1, 2) << endl;
    */


//queue:

    /*
    size();
    empty();
    push();//队尾插入
    front();//返回队头元素
    back();//返回队尾元素
    pop();//弹出队头元素
    */




//priority_queue:(默认为大根堆)

    /*
    push();//插入一个元素
    top();//返回堆顶元素
    pop();//弹出堆顶元素

    priority_queue<int, vector<int>, greater<int>> heap;//构建小根堆
    */



//stack:

    /*
    size();
    empty();
    push();//向栈顶插入
    top();//返回栈顶
    pop();//弹出栈顶
    */



//deque:双端队列


    /*
    size();
    empty();
    clear();
    front();
    back();
    push_back();
    pop_back();
    push_front();
    pop_front();
    //支持随机寻址[]  ,有begin(),end()

    */


//set:

    /*
    size();
    empty();
    clear();
    begin();
    end();

    set<int> s;//不支持插入重复元素
    multiset<int> p;//可以插入重复元素

    insert();//插入
    find();
    count();
    erase();//输入一个数x，删除所有等于x的节点     若输入一个迭代器，删除这个迭代器
    lower_bound(x);//返回大于x的最小数的迭代器
    upper_bound(x);//返回大于x的最小数的迭代器
    */




//map:

    /*
    insert();//插入的数是一个pair
    erase();//输入的可以为pair或迭代器
    find();
    //支持地址寻址[]

    map<string, int> a;
    a["abc"] = 1;//将abc映射为1
    cout << a["abc"] << endl;

    lower_bound(x);//返回大于x的最小数的迭代器
    upper_bound(x);//返回大于x的最小数的迭代器

    */


//unordered_set, unordered_map, unordered_multiset, unordered_multimap (基于哈希表实现)

    /*优点:增删查改时间复杂度为O（1）
      缺点：不支持lower_bound、upper_bound


    */



//bitset

    /*
    bitset<10000> s;
    ~s, &, |, ^, >>, <<, ==, !=, []

    count();//返回有多少个1
    any();//返回是否至少有一个一
    none();//判断是否全为0
    set();//所有位置换为1
    set(k, v);//将第K位换为v
    reset();//把所有位换为0
    flip();//等价于取反
    flip(k);//将第k位取反
    */


    return 0;
}
