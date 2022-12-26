#include<stdio.h>
void main(){
    int i,j,n,m;
    printf("enter n");
    scanf("%d",&n);

    m=65;
    for(i=n;i>0;i--){
        for (j=i;j<=n;j++){
            printf("%c",(m+j-1));
        }

        printf("\n");
    }




}

