#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);

    if (a==b && b==c){
        printf("triangle is equilateral");
    }
    else if (a==b || b==c || a==c)
        printf("triangle is isoceles");
    else
        printf("triangle is scalene");



}
