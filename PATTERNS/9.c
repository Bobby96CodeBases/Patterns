    // 9Q
    //       *
    //      * *
    //     * * *
    //      * *
    //       *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER N:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int k=n;k>i;k--){
//             printf(" ");
//         }
//         for(int j=0;j<i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i=n;i>0;i--){
//         for(int k=n;k>i;k--){
//             printf(" ");
//         }
//         for(int j=0;j<i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }

// }
//        *
//       * *
//      * * *
//      * * *
//       * *
//        *
#include<stdio.h>
int main(){
    int n;
    printf("ENTER N:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=n;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n;i>0;i--){
        for(int k=n;k>=i;k--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }

}
