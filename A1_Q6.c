#include<stdio.h>

int quadrant(int x, int y){
    if (x>0 && y>0){
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
        return 0;
    }else if (x<0 && y>0){
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);
        return 0;
    }else if (x<0 && y<0){
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
        return 0;
    }else if (x>0 && y<0){
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);
        return 0;
    }else if (x==0 && y!=0){
        printf("The coordinate point (%d,%d) lies on the X-axis.\n", x, y);
        return 0;
    }else if (x!=0 && y==0){
        printf("The coordinate point (%d,%d) lies on the Y-axis.\n", x, y);
        return 0;
    }else if (x==0 && y==0){
        printf("The coordinate point (%d,%d) lies on the origin.\n", x, y);
        return 0;
    }
}


int main(){
    int x,y;
    printf("Enter the value of x coordinate : ");
    scanf("%d",&x);
    printf("Enter the value of y coordinate : ");
    scanf("%d",&y);
    quadrant(x,y);
}