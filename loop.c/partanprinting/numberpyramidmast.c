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
      printf("%d",i);
    }
    printf("\n");
    for (int i = 1; i <= m; i++)
    {int a = 1;
      for (int j = 1; j <= nst; j++)
      {
        printf("%d",a);
        a++;
      }
      for (int k = 1; k <= nsp; k++)
      {
        printf(" ");
        a++;
      }
      for (int j = 1; j <= nst; j++)
      {
        printf("%d",a);
        a++;
      }
      nst--;
      nsp+=2;
      printf("\n");
    }
    
    
return 0;
}