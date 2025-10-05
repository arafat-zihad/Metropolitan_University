

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    bool lucky = true;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            lucky = false;
            break;
        }
        n /= 10;
    }

    if (lucky) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
