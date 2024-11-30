#include<stdio.h>

void print_remove_duplicate(){
    int n,count = 0,check=0;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int array[n],duplicate_arr[n];
    for (int i=0;i<n;i++){
        printf("Enter %d element : \n",i+1);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (array[i]==array[j]){
                for(int f = 0; f < count ; f++){
                    if(duplicate_arr[f] == array[i]){
                        check=1;
                    }
                }
                if(check == 0){
                    duplicate_arr[count]=array[i];
                    count++;
                    printf("%d ",array[i]);
                }else if (check == 1){
                    check = 0;
                }
                for (int k=j;k<n-1;k++){
                    array[k]=array[k+1];
                }
                j--;
                n--;
            }
        }
    }
    if (!count){
        printf("%d",-1);
    }
}

int main(){
    print_remove_duplicate();
    return 0;
}