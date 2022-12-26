#include<stdio.h>
void main(){
    int i,j,m,n;
    printf("enter n");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
            m=i;
            for (j=0;j<i;j++){
                printf("%d ",m);
                m++;
            }
            printf("\n");



    }




}

