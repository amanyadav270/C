    #include<stdio.h>
    #include<stdlib.h>
    //Declaration
    void print_arr();
    void input_arr();
    int* insert();

    //main function
    int main(){
        int size;
        int *ptr = &size;
        printf("Enter the size of array: ");
        scanf("%d",&size);

        int *arr = (int *)malloc(size * sizeof(int));
        
        input_arr(arr,ptr);
        int *new_arr = insert(arr,ptr);
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

    int* insert(int *arr,int *ptr){
        int insert_num,position;
        printf("Enter the Value to insert: ");
        scanf("%d",&insert_num);
        printf("Enter the position: (1 to %d)",*ptr+1);
        scanf("%d",&position);
        int *arr2 = (int *)realloc(arr,(*ptr+1)*sizeof(int));

        for(int i = *ptr; i >=position; i--){
            arr[i] = arr[i - 1];    
        }   
        arr[position-1] = insert_num;
        (*ptr)++;

        return arr2;
    }