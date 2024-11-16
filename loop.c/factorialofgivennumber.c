#include<stdio.h>
int main (){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int product = 1;
    for (int i =1; i <=n; i++){
    //   if (i%2==0)product = -n/2;
    //   else product = -n/2+n;
      product = product*i;
       printf(" %d\n",product);
    }
    printf("the factorial is : %d",product);
    return 0;
}