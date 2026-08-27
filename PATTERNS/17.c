    // 17Q
    //         A
    //       A B A
    //     A B C B A
    //   A B C D C B A
#include<stdio.h>
int main(){
    int n;
    printf("ENTER N:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
        printf(" ");
        }
        char c='A';
        int breaki=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
        printf("%c",c);
        if(j>=breaki){
            c--;
        }
        else{
            c++;
        }
        }
        for(int j=0;j<n-i-1;j++){
        printf(" ");
        }
        printf("\n");
    }
}