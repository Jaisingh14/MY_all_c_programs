#include<stdio.h>
void decrising(int n){
    if(n==0 ) return;
     printf("%d \n",n);
    decrising(n-1);
   
    return;
}
int main (){
        int n; 
    printf("enter number :");
    scanf("%d",&n);
 decrising(n);
    return 0;
}