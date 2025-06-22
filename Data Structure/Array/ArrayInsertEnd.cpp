#include <iostream>
using namespace std;

int main() {
    int n, value;
    cout << "Enter the size of an array: ";
    cin >> n;
    int a[n + 1];  // Extra space for the new element

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the value you want to insert: ";
    cin >> value;

    a[n] = value;  // Insert at the end
    n++;  // Increment the size

    cout << "After insertion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
