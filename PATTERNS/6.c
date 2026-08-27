    // 6Q
    //     1 2 3 4 5
    //     1 2 3 4
    //     1 2 3
    //     1 2
    //     1

    #include<stdio.h>
    int main(){
        int n;
        printf("ENTER N:");
        scanf("%d",&n);
        for(int i=n;i>0;i--){
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");
        }
    }