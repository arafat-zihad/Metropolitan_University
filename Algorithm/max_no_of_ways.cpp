#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, amount;
    cout << "Enter the number of coin: ";
    cin >> n;
    int coin[n];
    cout << "Enter the coints:" << endl;
    for(int i = 0; i < n; i++){
        cin >> coin [i];
    }

    cout << "Enter the amount of coin: ";
    cin >> amount;
    int table[n] [amount+1];

    for (int i = 0; i < n; i++){
        table [i][0] = 1;
    }

    for(int j = 1; j <= amount; j++){
        if(j % coin[0] == 0){
            table[0][j] = 1;
        }
        else {
            table[0][j] = 0;
        }
    }

    return 0;
}