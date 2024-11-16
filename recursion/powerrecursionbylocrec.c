#include<stdio.h>
int powerlog(int a , int b){
if(b==0) return 1;
int p =  powerlog(a,b/2);
int recun = p*p;;
if(b%2==0){
    return recun;
}
else { return recun * a;}
}
int main(){
    int a; 
    printf("enter base :");
    scanf("%d",&a);
    int b; 
    printf("enter power:");
    scanf("%d",&b);

    int p=powerlog(a,b);
    printf("%d raise to the power %dis %d",a,b,p);
    return 0;
}