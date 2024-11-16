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
    //     int r; 
    // printf("Enter number r :");
    // scanf("%d",&r);
    for(int i=0;i<=n;i++){
        int first =1;
        // printf("%d",first);
          for(int k = 1; k <= n-i;k++){
            printf(" ");
        }
        for(int j = 0;j<=i;j++){
             printf("%d ",first);
             first = first *(i-j)/(j+1); //  ic(j+1)
           
        }
        
        printf("\n");
    }
    // int nfact =factorial(n);
    // int rfact =factorial(r);
    // int nrfact=factorial(n-r);
 
//  
 return 0;
}