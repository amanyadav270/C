#include<stdio.h>

int check_prime(int num){
    int count = 0;
    for( int j=1;j<=num;j++){
        if(num%j==0){
            count++;
        }
    }
    if(count>2){
        return 0;     //Not a prime number
    }else{
        return 1;    // Prime number
    }
}
int main(){
    int num;
    printf("Enter numbers of elements: ");
    scanf("%d",&num);
    int array[num];
    for (int i=0; i<num; i++){
        printf("Enter Element %d : \n",i+1);
        scanf("%d",&array[i]);
    }
    int counter = 0;
    for (int i=0;i<num;i++){
        if(check_prime(array[i])==1){
            counter++;
        }
    }
    printf("There are %d prime numbers.\n",counter);

    return 0;
}