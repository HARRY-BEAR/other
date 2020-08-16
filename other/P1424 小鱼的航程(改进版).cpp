//P1424 小鱼的航程(改进版)

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "01111100";
    int n,m,ans=0;
    cin >> n >> m;
    ans = (m / 7)*5;
    m = m - (m / 7)*7;
    while (m != 0) {
        if (n == 7) n = 0;
        ans = ans + int(str[n]) - '0';
        m--; n++;
    }
    printf("%d", ans*250);
    return 0;
}