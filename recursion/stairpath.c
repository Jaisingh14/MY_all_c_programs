#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==0) return n +1;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
        int n; 
    printf("enter number :");
    scanf("%d",&n);
    int way = stair(n);
    printf("%d",way);
    return 0;
}