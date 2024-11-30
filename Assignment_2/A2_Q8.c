#include<stdio.h>

int max_marks(int array[],int n){
    int store=-1000000;
    for (int i=0;i<n;i++){
        if (store>array[i]);
        else{
             store=array[i];
        }
    }
    return store;
}
int min_marks(int array[],int n){
    int store=1000000;
    for (int i=0;i<n;i++){
        if (store<array[i]);
        else{
             store=array[i];
        }
    }
    return store;
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
    printf("Maximum Marks is %d\n",max_marks(marks,num));
    printf("Minimum Marks is %d\n",min_marks(marks,num));

    return 0;
}