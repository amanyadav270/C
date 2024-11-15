#include<stdio.h>

//Fucntions
void pascal_triangle();
long long C();
long long factorial();

//Main Function
int main(){
    int rows;
    printf("Enter the number of rows of pascal triangle:\n");
    scanf("%d",&rows);
    pascal_triangle(rows);
    return 0;
}

//Combination function
long long C(long n,long r){          // n is total number of items and r is number of items chosen
    return factorial(n)/(factorial(r)*factorial(n-r));
}

//factorial function
long long factorial(long n){
    if (n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

//Pascal Triangle Function
void pascal_triangle(int rows){
    printf("Pascal Triangle\n");
    for(int i = 0 ; i < rows ; i++){
        //Printing Spaces
        for (int s = 0 ; s <=rows-i ;s++){
                printf(" ");
            }
        //Printing Numbers
        for( int j = 0 ; j <= i ; j++ ){
            printf("%lld",C(i,j));
            printf(" ");
        }
        printf("\n");
    }
}