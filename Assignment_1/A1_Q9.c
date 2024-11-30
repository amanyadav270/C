#include<stdio.h>
int main(){
    int j,temp = 8;
    for ( int i = 0 ; i < 5 ; i++){
        for ( j = 0 ; j <= i ; j++){
            if ( j%2 ==  0){
                printf("%d",0);
            }else {
                printf("%d",1);
            }
        }
        for ( int k = 0 ; k < temp ;k++){
                printf(" ");
            }
        for ( j = 0 ; j <= i ; j++){
            if ( j%2 ==  0){
                printf("%d",0);
            }else {
                printf("%d",1);
            }
        }
        temp-=2;
        printf("\n");
    }
    return 0;
}