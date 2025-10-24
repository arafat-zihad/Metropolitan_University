//https://codeforces.com/problemset/problem/451/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;

    int a = n + m;
        int chk = 0; 

    for(int i = 0; i < a; i++){
        chk = a - 2;
        if(chk < 2 && i % 2 != 0){
            cout << "Akshat" << endl;
        }
        else if( chk < 2 && i % 2 == 0){
            cout << "Malvika" << endl;
        }
    }
    return 0;
}