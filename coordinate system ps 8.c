#include<stdio.h>
void main(){
    int x,y;
    printf("enter x,y");
    scanf("%d%d",&x,&y);

    if (x>0 && y>0)
        printf("1st quadrant");
    else if (x<0 && y>0)
        printf("2nd quadrant");
    else if (x<0 && y<0)
        printf("3rd quadrant");
    else if (x>0 && y<0)
        printf("4th quadrant");
    else if (x==0 && y>0)
        printf("positive y axis");
    else if (x>0 && y==0)
        printf("positive x axis");
    else if (x<0 && y==0)
        printf("negative x axis");
    else if (x==0 && y<0)
        printf("negative y axis");
    else
        printf("origin");



}
