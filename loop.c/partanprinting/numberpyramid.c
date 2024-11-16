#include<stdio.h>
int main (){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int nsp = 1;
    for(int i =1; i <=n; i++){
        for(int k = 1; k <= n-i;k++){
            printf(" ");
        }
        for (int j=1;j<=nsp;j++){
            printf("%d",j);
        }
        nsp = nsp + 2 ;
        printf("\n");
    }
    return 0;
}