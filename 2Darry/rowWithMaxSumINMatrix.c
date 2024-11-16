 #include<stdio.h>
 #include<limits.h>
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
         int maxSum = INT_MIN;
    int maxRow = -1;
   
for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += a[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    printf("The row with the maximum sum is %d with a sum of %d\n", maxRow + 1, maxSum);

    return 0;
}