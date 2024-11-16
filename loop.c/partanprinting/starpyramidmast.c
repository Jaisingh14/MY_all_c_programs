#include<stdio.h>
int main(){
      int n;
    printf("enter length of side :-");
    scanf("%d",&n);
     int m = n-1;
    int nsp = 1;
    int nst = m;  
    for (int i = 1; i <= 2*n-1; i++)
    {
      printf("*");
    }
    printf("\n");
    for (int i = 1; i <= m; i++)
    {
      for (int j = 1; j <= nst; j++)
      {
        printf("*");
      }
      for (int k = 1; k <= nsp; k++)
      {
        printf(" ");
      }
      for (int j = 1; j <= nst; j++)
      {
        printf("*");
      }
      nst--;
      nsp+=2;
      printf("\n");
    }
    
    
return 0;
}