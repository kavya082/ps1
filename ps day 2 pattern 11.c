#include<stdio.h>
void main(){
    int i,j,n,k,l,m;
    printf("enter n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for (j=1;j<=i;j++){
            printf("%d",j);
        }

        for (k=1;k<=2*n-2*i;k++){
            printf(" ");
        }

        m=i;
        for (l=1;l<=i;l++){
            printf("%d",m);
            m--;
        }

        printf("\n");





    }


}
