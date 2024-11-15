#include<stdio.h>
//Calling Fucntion
int hcf();
//Main
int main(){
    int n1,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    printf("Hcf = %d",hcf(n1,n2));
}

//Hcf function
int hcf(int n1,int n2){
    int remainder;
    while(n2!=0){
      remainder=n1%n2;
      n1=n2;                        //n2 value goes to n1
      n2=remainder;                 //remainder value goes to n2
    }               
    return n1;                      //returns n1 when n2=0
    }                 