#include<stdio.h>
int main(){
    int n;
    printf("ENTER N:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(char c ='E'-i;c<='E';c++){
                printf("%c",c);
        }
        printf("\n");
    }
}