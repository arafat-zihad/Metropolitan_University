#include <stdio.h>
int main(){
    int arr[100];
    int n, i, pos, val, num_ins, num_del;

    //Step 1: Input the size and elements 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d the elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Step 2: Handle Insertions
    printf("Enter the number of insertions: ");
    scanf("%d", &num_ins);
    for(i = 0; i < num_ins; i++){
        printf("Enter the position and value to insert: ");
        scanf("%d %d", &pos, &val);
    

        if(pos < 0 || pos > n){
            printf("Invalid position\n");
            continue;
        }

        if (n >= 100) {
            printf("Array is full, cannot insert!\n");
            continue;
        }

        //Shift elements to the right to make space
        for(int j = n; j > pos; j--){
            arr[j] = arr[j - 1];
        }
        arr[pos] = val;
        n++;
    }

    printf("After insertions: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    //Step 3: Handle deletions
    printf("Enter the number of deletion: ");
    scanf("%d", &num_del);
    for(i = 0; i < num_del; i++){
        int choice;
        printf("Enter 1 to delete by position, 2 to delete by value: ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            if(pos < 0 || pos >= n){
                printf("Invalid position\n");
                continue;
            }
            for(int j = pos; j < n - 1; j++){
                arr[j] = arr[j+1];
            }
            n--;
        } else if(choice == 2){
            printf("Enter the value to delete: ");
            scanf("%d", &val);

            //Searching value
            int found = 0;
            for (int j = 0; j < n; j++){
                if(arr[j] == val){
                    found = 1;
                    //shift elements to the left
                    for(int k = j; k < n - 1; k++){
                        arr[k] = arr[k+1];
                    }
                    n--;
                    break;
                }
            }
            if (!found){
                printf("Value is not in array!\n");
            }
        } else {
            printf("Invalid Choice!\n");
        }
        
        printf("After Deletion: ");
        for(i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}