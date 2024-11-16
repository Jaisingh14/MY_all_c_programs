#include<stdio.h>
int main(){
    int r;
    printf("Enter number of row:-");
    scanf("%d",&r);
        int c;
    printf("Enter number of coloumn:-");
    scanf("%d",&c);

    int a[r] [c];//for 1 2
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        }
          for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j) {
            printf("%d ",a[i][j] );
          
        }printf("\n");
        }
        int brr[c][r];
        printf("transpose of matrix is\n");
          for (int i = 0; i < c; ++i){
        for (int j = 0; j < r; ++j) {
            brr[i][j]=a[j][i];
            printf("%d ",brr[i][j] );
          
        }printf("\n");
        }

    return 0;
}