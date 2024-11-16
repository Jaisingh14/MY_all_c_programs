#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {    
        for(int q = 1; q<=nsp;q++){//sapces ke liye
            printf("  ");
        }
        nsp--;
       for (int j = 1; j <= i; j++)// number triangle
       {
       printf("%d ",j);
      
       }
        int a = i-1 ;
       for (int k = a; k >=1; k--)
       {
        printf("%d ",k);
         
        //a = a-1;
       }
       
       printf("\n");
    }
    
    return 0;
}