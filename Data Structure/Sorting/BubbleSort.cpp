//Bubble sort...
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many elements: ";
    cin >> n;
    int arr[n]; // Declaring an array of size n
    cout <<"Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input elements for the array
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
   for(int i=0; i<n; i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}