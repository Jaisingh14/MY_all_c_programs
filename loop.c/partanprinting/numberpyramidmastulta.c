#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    int nsp = n;
    for (int i = 1; i <= n; i++)
    {    
        for(int q = 1; q<i;q++){//sapces ke liye
            printf("  ");
        }
        nsp--;
       for (int j = 1; j <= n-i +1; j++)// dec number
       {
       printf("%d ",j);
      
       }
        // int a = 1;
       for (int k = n-i ; k >=1 ; k--)//inc number
       {
        printf("%d ",k);
         
        // a = a-1;
       }
       
       printf("\n");
    }
    
    return 0;
}