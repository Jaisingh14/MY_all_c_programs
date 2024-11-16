#include<stdio.h>
int main(){
    // printf("*****\n*****\n*****");
    //
    int n;
    printf("enter number of rowes");   
    scanf("%d",&n);
     int m;
    printf("enter numberof coloum ");   
    scanf("%d",&m);
    for (int i= 1 ; i <=n; i++){   //outer loop->no of line
        for (int  i = 1; i <=m; i++)// inner loop -> no of star3e in each line
       {
           printf("*");
        }
    printf("\n");
    }
 
     return 0;
}