#include<stdio.h>
int main(){
    int n;
    printf("enter no ");
    scanf("%d",n);
    int a = 1;
    for (int i = 1; i <=n; i++)// alt ireplace i<=n by 2 *n-1
    {
          printf("%d ",a); 
        a= a+2;
    }
  
    return 0;
}