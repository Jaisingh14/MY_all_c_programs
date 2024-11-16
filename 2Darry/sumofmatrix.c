 #include<stdio.h>
 int main(){
    int r,c;
    printf("Enter number of row");
    scanf("%d",&r);
    printf("Enter number of column");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter elements of 1st matrix (2x2):\n");
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
    int sum =0;
    for(int i =0; i<r;i++){
        for(int j=0;j<c;j++){
            sum += a[i][j];
        }
    }
    printf("sum of the given matrix is %d",sum);
        return 0;
 }