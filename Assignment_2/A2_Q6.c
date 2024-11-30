#include<stdio.h>
int main(){
    int num, count=0, sum=0;
    printf("Enter numbers of subjects: ");
    scanf("%d",&num);
    int marks[num];
    for (int i=0;i<num;i++){
        printf("Enter marks of subject %d : \n",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
        if(marks[i] > 100 || marks[i] < 0){
            printf("Try Again\nMarks should be between 0 to 100\n");
            sum-=marks[i];
            i--;
        }
    }
    printf("Sum of all Average Marks is %d",sum/num);
    return 0;
}