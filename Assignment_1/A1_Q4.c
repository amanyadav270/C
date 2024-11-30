#include<stdio.h>

void swap_method_1(int a , int b);
void swap_method_2(int * ptr1, int *ptr2);
void swap_method_3(int a, int b);
void swap_method_4(int a , int b);

int main(){
    int num1,num2;
    printf("Enter two numbers : \n");
    scanf("%d%d",&num1,&num2);
    swap_method_4(num1,num2);
}

//Method 1 using third variable
void swap_method_1(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n",a,b);
}

//Method 2 using pointers
void swap_method_2(int * ptr1, int *ptr2){
    int temp;
    temp = * ptr1;
    * ptr1 = * ptr2;
    * ptr2 = temp;
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n",* ptr1,* ptr2);
}

//Method 3 Arithmatic
void swap_method_3(int a, int b){
    printf("%d\n",a);
    a=a+b; //Sum of a + b
    b=a-b;   //sum - b to get a
    a=a-b;   //sub new b(a) from sum to get b
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n",a,b);
    }

// Method 4 XOR
void swap_method_4(int a , int b){
    a = a^b;
    b = a^b;
    a = a^b;
    printf("Swapped Successfully.\n");
    printf("1st number = %d\n2nd number = %d\n",a,b);
}
