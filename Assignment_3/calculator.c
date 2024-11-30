    #include<stdio.h>
    #include<math.h>
    #include<stdlib.h>

    //Declaration
    long double sq_root();
    long double log_value();
    long double addition();
    long double subtraction();
    long double mutliplication();
    long double division();
    void input();
    void display_calc();
    long double operation();


    int main(){

        display_calc();
        long double result = operation();
        printf("Result : %.4Lf",result);



        return 0;
    }


    void display_calc(){
        printf("\n\nCalculator\n\n");
    }

    long double operation(){
        int choice;
        long double num1,num2;
        printf("1. Addition\n2. Subtraction\n3. Multiply\n4. Divide\n5. Logarathmic\n6. Square Root\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                input(&num1,&num2);
                return addition(num1,num2);
            case 2:
                input(&num1,&num2);
                return subtraction(num1,num2);
            case 3:
                input(&num1,&num2);
                return mutliplication(num1,num2);
            case 4:
                input(&num1,&num2);
                return division(num1,num2);
            case 5:
                return log_value();
            case 6:
                return sq_root();
            default:
                printf("\nWrong Input, Try Again\n");
        }
    }

    //input num1 and num2
    void input(long double *num1, long double *num2){
        printf("Enter 1st Number : \n");
        scanf("%Lf", num1);
        printf("Enter 2nd Number : \n");
        scanf("%Lf", num2);
    }


    //Addition
    long double addition(long double num1, long double num2){
        return num1 + num2;
    }

    //Subtraction
    long double subtraction(long double num1, long double num2){
        return num1 - num2;
    }

    //Multiplication
    long double mutliplication(long double num1, long double num2){
        return num1 * num2;
    }

    //Division
    long double division(long double num1, long double num2){
    if (num2 == 0) {
        printf("Error ! Can't divide by zero.\n");
        exit(1);  // Exit program on division by zero
    }
    return num1 / num2;
        return num1 / num2;
    }

    //Logarithmic Values
    long double log_value(){
        long double num;
        printf("Enter number\n");
        scanf("%Lf",&num);
        if (num <= 0) {  
            printf("Error\n");
            exit(1);
        }
        return log(num);
    }

    //Square Root
    long double sq_root(){
        long double num;
        printf("Enter number : \n");
        scanf("%Lf",&num);
        if (num <= 0) {  
            printf("Error\n");
            exit(1);
        }
        return sqrt(num);
    }
