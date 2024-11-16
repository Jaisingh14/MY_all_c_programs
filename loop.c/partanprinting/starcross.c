#include<stdio.h>
int main(){
    int n;
    printf("enter number of rowes");   
    scanf("%d",&n);
    //  int m;
    // printf("enter numberof coloum ");   
    // scanf("%d",&m);
    for (int i= 1 ; i <=n; i++){  
        for (int  j = 1; j <=n; j++)
       {
        // int a = (n/2)+1;
         if(j== i||i+j == n+1 )printf("* ");
         else printf("  ");
        }
    printf("\n");
    }
 
     return 0;
}