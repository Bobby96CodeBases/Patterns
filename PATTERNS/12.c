    // 12Q
    //  1         1
    //  1 2     2 1
    //  1 2 3 3 2 1

#include<stdio.h>
int main(){
    int n;
    printf("ENTER N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int k=0;k<2*(n-i);k++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}

