#include<stdio.h>

//Array Printing 
void array_print(int array[], int n){
    printf("[");
    for (int i=0;i<n-1;i++){
        printf("%d, ",array[i]);
    }
    printf("%d",array[n-1]);
    printf("]\n");
}

//Updating Array
void update_array(int array[], int n, int add_marks){
    for (int i=0;i<n;i++){
        array[i]+=add_marks;
    }
}

//Main Function
int main(){
    int n,add_marks;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("Enter %d element : \n",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter marks to add : ");
    scanf("%d",&add_marks);

    printf("Before updating marks ");
    array_print(array,n);

    update_array(array,n,add_marks);
    printf("After updating marks ");
    
    array_print(array,n);
    return 0;
}