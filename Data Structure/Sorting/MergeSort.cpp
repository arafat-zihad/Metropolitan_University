#include <iostream>
using namespace std;

void merge(int low, int mid, int high, int arr[], int temp[]) {
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (k = low; k <= high; k++) {
        arr[k] = temp[k];
    }
}

void mergesort(int low, int high, int arr[], int temp[]) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(low, mid, arr, temp);
        mergesort(mid + 1, high, arr, temp);
        merge(low, mid, high, arr, temp);
    }
}

int main() {
    int m;
    cout << "Enter the size of the array: ";
    cin >> m;

    int arr[m], temp[m];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    mergesort(0, m - 1, arr, temp);

    cout << "Sorted array: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}