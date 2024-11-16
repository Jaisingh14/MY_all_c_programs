#include<stdio.h>
int main (){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int a = 1;
    int b =1;
    int sum = 1;
    for(int i = 1; i<=n; i++) 
     { printf("the %d number is  %d  \n",i,a);
      sum= a+b; 
     a = b;
     b = sum;
     }
    return 0; 
    }
