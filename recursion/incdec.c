#include<stdio.h>
// void increasing(int n){
       
//     if(n==0 ) return; 
//     increasing(n-1);
//     printf("%d \n",n);
//     return;
// }
void decrising(int n){
    if(n==0 ) return;
     printf("%d \n",n);
    decrising(n-1);
    printf("%d \n",n);
    return;
}
int main (){
        int n; 
    printf("enter number :");
    scanf("%d",&n);
 decrising(n); 
    // increasing(n);

    return 0;
}