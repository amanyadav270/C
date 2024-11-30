#include<stdio.h>

void print_array(int array[],int n){
    printf("arr[] = {");
    for (int i=0;i<n-1;i++){
        printf("%d, ",array[i]);
    }
    printf("%d",array[n-1]);
    printf("}");
}

void cyclically_rotate_array(int array[],int num){
    int last=array[num-1];
    for(int i=num-1;i>0;i--){
        array[i]=array[i-1];
    }
    array[0]=last;
}
int main(){
    int num;
    printf("Enter numbers of elements: ");
    scanf("%d",&num);
    int array[num];
    for (int i=0;i<num;i++){
        printf("Enter element %d : \n",i+1);
        scanf("%d",&array[i]);
    }
    print_array(array,num);
    cyclically_rotate_array(array,num);
    printf("\n");
    print_array(array,num);
    return 0;
}