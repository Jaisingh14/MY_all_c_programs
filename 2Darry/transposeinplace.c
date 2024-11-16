#include<stdio.h>
int main(){
    int n;
    printf("Enter number of row:-");
    scanf("%d",&n);

    int a[n] [n];//for 1 2
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        }
          for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            printf("%d ",a[i][j] );
          
        }printf("\n");
        }
        // int brr[n][n];
      
          for (int i = 0; i < n; ++i){
        for (int j = i; j < n; ++j) {
           int temp = a[i][j];
           a[i][j]= a[j][i];
           a[j][i]= temp;
        }
        }
  printf("transpose of matrix is\n");
         for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            printf("%d ",a[i][j] );
          
        }printf("\n");
        }
        

    return 0;
}