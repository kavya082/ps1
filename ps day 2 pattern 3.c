#include<stdio.h>
void main(){
    int i,j,n,m;
    printf("enter n");
    scanf("%d",&n);

    m=65;
    for(i=0;i<n;i++){
        for (j=0;j<=i;j++){
            printf("%c",m);
        }
        m++;
        printf("\n");
    }




}
