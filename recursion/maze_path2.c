#include<stdio.h>
int maze(int n, int m){
    int rightWay =0;
    int downWay =0;
if(n==1 && m==1) return 1; 
if(n==1){
    rightWay += maze(n,m-1);
}
if(m==1){ 
    downWay += maze(n-1,m);
}
if(n>1 && m>1){
     rightWay += maze(n,m-1);
       downWay += maze(n-1,m);
}
int totalWay = rightWay + downWay ;
    return totalWay;
}
int main(){
    int a; 
    printf("Enter number of rows of maze  :");
    scanf("%d",&a);
    int b; 
    printf("Enter number of column of maze:");
    scanf("%d",&b);
    int noofwaye= maze(a,b);
    printf("%d ",noofwaye);
    return 0;

}