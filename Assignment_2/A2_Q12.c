    #include<stdio.h>
    #include<stdlib.h>
    //Declaration
    void print_arr();
    void input_arr();
    int* delete();

    //main function
    int main(){
        int size;
        int *ptr = &size;
        printf("Enter the size of array: ");
        scanf("%d",&size);

        int *arr = (int *)malloc(size * sizeof(int));
        
        input_arr(arr,ptr);
        int *new_arr = delete(arr,ptr);
        print_arr(new_arr,ptr);
        free(arr);

        return 0;
    }

    void print_arr(int *arr, int *ptr3){
        printf("[");
        for (int i = 0; i < *ptr3-1; i++){
            printf("%d, ",arr[i]);
        }
        printf("%d]",arr[*ptr3-1]);
    }

    void input_arr(int *arr,int *ptr){
        for (int i = 0; i < *ptr; i++){
            scanf("%d",arr);
            arr++;
        }
    }

    int* delete(int *arr,int *ptr){
        int position;
        printf("Enter the position to delete: (1 to %d)",*ptr);
        scanf("%d",&position);


        for(int i = position-1; i < *ptr-1; i++){
            arr[i] = arr[i + 1];    
        }
        int *arr2 = (int *)realloc(arr,(*ptr-1)*sizeof(int));
        (*ptr)--;

        return arr2;
    }