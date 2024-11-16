#include<stdio.h>
int main(){
    int n;
    printf("enter number ");
    scanf("%d",&n);
   int nst = 1;
   
    for(int i = 1 ;i<=n; i++){
         int b= 1;
         for (int j = 1; j <= n-i; j++)
    {
      printf("  ");
    }
        for(int k= 1; k<=nst ; k++){
              int d = b + 64;
            char ch = (char)d;
            printf("%c ",ch);
            b++;
        }
        nst = nst + 2;
         printf("\n");
    }
    return 0;
}