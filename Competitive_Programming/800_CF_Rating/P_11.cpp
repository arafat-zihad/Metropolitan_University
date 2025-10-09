#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int cnt = 0;        // count lucky digits
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            cnt++;
        }
        n /= 10;
    }

    bool flag = true;   // assume count is lucky
    if (cnt == 0) flag = false;  // no lucky digits at all

    while (cnt > 0) {
        int d = cnt % 10;
        if (d != 4 && d != 7) {
            flag = false;
            break;
        }
        cnt /= 10;
    }

    if (flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
