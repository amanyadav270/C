#include<stdio.h>

//Array Printing 
void print_array(int array[], int n){
    printf("[");
    for (int i=0;i<n-1;i++){
        printf("%d, ",array[i]);
    }
    printf("%d",array[n-1]);
    printf("]\n");
}

//Printing Grades 
void grades(int marks[], int n){
    for (int i=0;i<n;i++){
        if(marks[i] <= 100 && marks[i] >= 75){
            printf("Student %d : Grade A\n",i+1);
        }else if ( marks[i] <= 74 && marks[i] >= 60){
            printf("Student %d : Grade B\n",i+1);
        }else if ( marks[i] <= 59 && marks[i] >= 40){
            printf("Student %d : Grade C\n",i+1);
        }else if ( marks[i] <= 40 && marks[i] >= 0){
            printf("Student %d : Grade D\n",i+1);
        }
    }
}
int main(){
    int num;
    printf("Enter numbers of students: ");
    scanf("%d",&num);
    printf("Marks Value Should be between 0 to 100 \n");
    int marks[num];
    for (int i=0;i<num;i++){
        printf("Enter marks of student %d : \n",i+1);
        scanf("%d",&marks[i]);
        if(marks[i] > 100 || marks[i] < 0){
            printf("Try Again\nMarks should be between 0 to 100\n");
            i--;
        }
    }
    printf("Marks : ");
    print_array(marks,num);
    printf("\n");
    grades(marks,num);
}