#include<stdio.h>
int main (){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i<=n){
        
        if(i%2==0){
            sum = sum + i;
           printf("%d + ",i);    
        }
        i++;
        

    }
    printf("the sum is %d",sum);
    return 0;
}