    // 7Q
    //              *
    //             * *
    //            * * *
    //           * * * *

    #include<stdio.h>
    int main(){
        int n;
        printf("ENTER N:");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int k=0;k<=n-i-1;k++){
            printf(" ");
            }
            for(int j=1;j<=i;j++){
            printf("* ");
            }
            for(int k=0;k<=n-i-1;k++){
            printf(" ");
            }
            printf("\n");
        }
    }