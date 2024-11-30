#include<stdio.h>
#include<math.h>

//Calling
void decimal_to_binary();
void binary_to_decimal();

//Main Function
int main(){
    int num,choice;
    printf("Enter Your Choice:\n1.Decimal to binary\n2.Binary to Decimal\n3.Exit\n");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Enter the number : \n");
        scanf("%d",&num);
        decimal_to_binary(num);
    }else if (choice == 2){
        printf("Enter the number : \n");
        scanf("%d",&num);
        binary_to_decimal(num);
    }else if (choice == 3){
        printf("Exited Successfully");
    }else{
        printf("Invalid Input");
    }
    return 0;
}

//Decimal to Binary
void decimal_to_binary(int num){
    int binary[32]={0};
    int i = 0;
    while ( num != 0){
        binary[i] = num%2;
        num/=2;
        i++;
    }
    printf("Binary : \n");
    for(i=i-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    printf("\n");
}

//Binary to Decimal
void binary_to_decimal(int num){
    int sum = 0, temp=num, count = 0;
    while(temp != 0){
        sum+=pow(2,count)*(temp%10);
        temp/=10;
        count++;
    }
    printf("Decimal Representaion : %d",sum);
}