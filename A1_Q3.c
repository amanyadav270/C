#include<stdio.h>

int bitwise_minus(int num1 , int num2){
    return num1+(~num2+1);
}

int main(){
    int num1,num2;
    printf("Enter the number 1:\n");
    scanf("%d",&num1);
    printf("Enter the number 2: \n");
    scanf("%d",&num2);
    printf("Subtraction of %d - %d is %d",num1,num2,bitwise_minus(num1,num2));
    return 0;
}