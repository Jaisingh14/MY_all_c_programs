#include<stdio.h>
void incrising( int x,int n){
    if(x>n ) return;
    printf("%d \n",x);
    incrising(X+1,n);
    return;
}
int main (){
        int n; 
    printf("enter number :");
    scanf("%d",&n);
 incrising(1,n);
    return 0;
} 