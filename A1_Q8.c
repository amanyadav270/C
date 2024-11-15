#include<stdio.h>

int main (){
    for(int i = 0; i < 5; i++){
        int temp = i;
        for(int j = 0;j <= i; j++){
            if (temp%2 == 0){
                printf("%d",1);
            }else{
                printf("%d",0);
            }
            temp++;
        }
        printf("\n");
    }
    return 0;
}