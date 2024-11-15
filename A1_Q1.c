//Wap to check wether a given number is Armstrong or not
#include <stdio.h>

//Calling functions
void armstrong_num();

//Main
int main()
{
int num;
printf("Enter the number : ");
scanf("%d",&num);
armstrong_num(num);                                   //calling armstrong function
return 0;
}

//Armstrong number function
void armstrong_num(int num){
    int sum=0,remainder,num_copy;
    num_copy = num;
    while(num_copy != 0){                            //loop will run till num_copy = 0
        remainder = num_copy%10;                     //last digit goes in remainder
        sum+=remainder*remainder*remainder;          //adding last digit cube to sum
        num_copy/=10;                                //removing the last digit
    }
    if(sum==num){
            printf("Yes, Its an amstrong number.");
        }else{
            printf("No, Its not an amstrong number.");
        }
}