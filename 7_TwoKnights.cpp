#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        unsigned long long NoOfWays = 1ULL * i * i * (i * i - 1) / 2;
        unsigned long long NoOfAttack = 4ULL * (i - 1) * (i - 2);
        unsigned long long ans = NoOfWays - NoOfAttack;
        cout << ans << endl;
    }

    return 0;
}
