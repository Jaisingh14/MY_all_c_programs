#include<stdio.h>
int main (){
    int a;
    printf("Enter the base  number ");
    scanf("%d",&a);
        int b;
    printf("Enter the power number ");
    scanf("%d",&b);
    int power = 1;
    for(int i = 1; i<=b; i++) 
     { power = power*a;
     }
     printf("%d to the power %d is %d",a,b,power);
    return 0; 
    }
