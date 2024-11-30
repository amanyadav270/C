#include<stdio.h>

void even_odd(int marks[],int n) {
    for (int i=0; i<n; i++) {
        if (marks[i]%2==0) {
            printf("Score of student %d is even\n", i + 1);
        } else {
            printf("Score of student %d is odd\n", i + 1);
        }
    }
}

int main(){
    int num;
    printf("Enter numbers of students: ");
    scanf("%d",&num);
    int marks[num];
    for (int i=0; i<num; i++){
        printf("Enter marks of student %d : \n",i+1);
        scanf("%d",&marks[i]);
        if(marks[i] > 100 || marks[i] < 0){
            printf("Try Again\nMarks should be between 0 to 100\n");
            i--;
        }
    }
    even_odd(marks,num);
    return 0;
}