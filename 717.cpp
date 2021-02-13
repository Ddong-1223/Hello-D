// #include<iostream>
// #include<cstring>
// #include<algorithm>

// using namespace std;
// const int N = 50;
// int f[N];
// int n;

// int main() {
//     cin >> n;
//     f[1] = 0;
//     f[2] = 1;
//     for(int i = 3; i <= n; i ++ ) f[i] = f[i - 1] + f[i - 2];
//     for(int i = 1; i <= n; i ++ ) cout << f[i] << ' ';

//     return 0;
// }


#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N = 50;
int f[N];
int n;

int main() {
    cin >> n;
    f[1] = 0;
    f[2] = 1;
    int a = 0, b = 1;
    for(int i = 3; i <= n; i ++ ) {
        f[i] = a + b;
        a = b;
        b = f[i];
    }

    for(int i = 1; i <= n; i ++ ) cout << f[i] << ' ';

    return 0;
}
