#include<stdio.h>
int main (){
    int n;
    printf("enter number");
    scanf("%d",&n);
    int nsp = n -1;
    for (int i = 1; i <= n; i++)
    {int b = 1;

        for (int q =1; q <= nsp; q++)
    {
        printf("  ");
    }
    nsp--;
    for (int  j = 1; j <= i; j++)
    {
          int d = b + 64;
            char ch = (char)d;
            printf("%c ",ch);
            b++;
    }
    int a = i - 1;
   for(int k = 1; k <=i-1;k++ ){
      int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a--;
   }
    printf("\n");
    
        
    }
    
    return 0;  
}