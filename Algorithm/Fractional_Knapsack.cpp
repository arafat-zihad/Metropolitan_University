#include<bits/stdc++.h>
using namespace std;

struct Item {
    string name;
    double weight, value, unitValue;
};

bool comp(Item i1, Item i2) {
    return (i1.unitValue > i2.unitValue);
}

int main() {
    int n;
    double capacity;

    cout << "Enter the number of items: ";
    cin >> n;

    Item arr[n];

    cout << "Enter name, weight and value of each item:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].weight >> arr[i].value;
        arr[i].unitValue = arr[i].value / arr[i].weight;
    }

    // Sort by unitValue descending
    sort(arr, arr + n, comp);

    cout << "Enter the capacity of Knapsack : ";
    cin >> capacity;

    double profit = 0;

    cout << "\nItems taken:\n";
    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= capacity) {
            profit += arr[i].value;
            cout << "Took full " << arr[i].name << " (Weight: " << arr[i].weight << ")\n";
            capacity -= arr[i].weight;
        } else {
            profit += arr[i].unitValue * capacity;
            cout << "Took " << capacity << " kg of " << arr[i].name << "\n";
            break;
        }
    }

    cout << "\nMaximum Profit: " << profit << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// struct Item {
//     string name;
//     double weight, price, unitPrice;
// };

// bool comp(Item i1, Item i2) 
// { 
//     return (i1.unitPrice > i2.unitPrice); 
// }

// int main(){

//     int n;
//     double capacity;
//     cout << "Enter the number of items: ";
//     cin >> n;
//     Item arr[n];

//     for(int i=0; i<n; i++) 
//     { 
//     cin >> arr[i].name >> arr[i].weight >> arr[i].price; 
//     arr[i].unitPrice = arr[i].price / arr[i].weight;
//     } 
    
//     sort(arr, arr+n, comp);

//     cout << "Enter the capcity of knapsack: ";
//     cin >> capacity;
//     double profit = 0;

//     for(int i = 0; i <n; i++){
//         if(arr[i].weight <= capacity){
//             profit += arr[i].price;
//             capacity -= arr[i].weight;
//         }
//         else{
//             profit += arr[i].unitPrice*capacity;
//             break;
//         }
//     }
//     cout <<"Profit: "<<profit <<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// struct Item
// {
//     string name;
//     double weight,price,unitPrice;
// };

// bool comp(Item i1, Item i2)
// {
//     return (i1.unitPrice>i2.unitPrice);
// }

// int main()
// {
//     int n;
//     double capacity;
//     cout << "Enter the number of items: ";
//     cin >> n;

//     Item arr[n];

//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i].name >> arr[i].weight >> arr[i].price;
//         arr[i].unitPrice = arr[i].price/arr[i].weight;
//     }
//     sort(arr, arr+n, comp);

//     cout << "Enter the capacity of Knapsack : ";
//     cin >> capacity;

//     double profit=0;

//     for(int i=0; i<n; i++)
//     {
//         if(arr[i].weight<=capacity)
//         {
//             profit+=arr[i].price;
//             capacity-=arr[i].weight;
//         }
//         else
//         {
//             profit+=arr[i].unitPrice*capacity;
//             break;
//         }
//     }

//     cout << "Profit: " << profit << endl;

//     return 0;
// }


