#include<stdio.h>
int main(){
    int num,count = 0;
    printf("Enter numbers of students: ");
    scanf("%d",&num);
    int marks[num];
    for (int i=0;i<num;i++){
        printf("Enter marks of student %d : \n",i+1);
        scanf("%d",&marks[i]);
        if(marks[i] > 100 || marks[i] < 0){
            printf("Try Again\nMarks should be between 0 to 100\n");
            i--;
        }
    }
    for (int i=0;i<num;i++){
        if(marks[i] == 99){
            printf("\nStudent %d scored first 99 marks.\n",i+1);
            count++;
            break;
        }
    }
    if (count == 0){
        printf("\nNo student scored 99 marks.\n");
    }
    return 0;
}