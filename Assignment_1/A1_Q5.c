#include<stdio.h>

void perfect_number(int a){
    int temp = 1;
    int sum = 0;
    while(a>temp){
        if(a%temp==0){
            sum+=temp;
        }
        temp++;
    }
    if(sum == a){
        printf("Its a perfect number.");
    }else{
        printf("Its not a perfect nmber.");
    }
}

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    perfect_number(num);
    return 0;
}