#include<stdio.h>
int factorial(int x ){
    int fact=1;
    for(int i = 2; i <=x;i++){
    fact = fact *i;
    }
    return fact;
}
int combination(int n,int r){
    return  factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n; 
    printf("Enter number n :");
    scanf("%d",&n);
        int r; 
    printf("Enter number r :");
    scanf("%d",&r);
    // int nfact =factorial(n);
    // int rfact =factorial(r);
    // int nrfact=factorial(n-r);
 int ncr =combination(n,r);
 printf("%d",ncr);
 return 0;
}