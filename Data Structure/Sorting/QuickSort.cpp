#include <bits/stdc++.h>
using namespace std;

int arr[5] = {9, 4, 7, 1, 5}, n = 5;

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++){
        if (arr[j] <= pivot){
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i+1], &arr[high]);
    return (i + 1);

}

void quicksort(int low, int high){
    if (low < high)
    {
        int pi = partition (low, high);
        quicksort (low, pi - 1);
        quicksort (pi + 1, high);
    }
    
}
void print(){
    for (int i =0; i < n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    cout << "Before sorting array elemets are" << endl;
    print();
    quicksort(0, n-1);
    cout <<"After sorting array elements are" << endl;
    print ();
    return 0;
}