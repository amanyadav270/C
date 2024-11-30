#include<stdio.h>

void peak_num(int array[],int num){
    for(int i=0;i<num;i++){
        if(array[i]>=array[i-1] && array[i]>=array[i+1]){
            printf("%d is a peak element.\n",array[i]);
        }
    }
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
    array[num]=-1000000;

    peak_num(array,num);
    return 0;
}