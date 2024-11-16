 #include<stdio.h>
     int sumOfRectangle(int a[3][4],int sr,int sc,int er,int ec){
                int sum =0;
        for(int i =sr; i<=er;i++){
        for(int j=sc;j<=ec;j++){
            sum += a[i-1][j-1];
            printf("%d   %d\n",sum,a[i-1][j-1]);
        }
        }

return sum;
    }

 int main(){
    int a[3][4];
   // printf("Enter elements of 1st matrix (2x2):\n");
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 4; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        }
          for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 4; ++j) {
            printf("%d ",a[i][j] );
          
        }printf("\n");
        }
    
    int sr;
    printf("Enter row number to start from:-");
    scanf("%d",&sr);
        int sc;
    printf("Enter column number to start from:-");
    scanf("%d",&sc);
    int er;
    printf("Enter row number to end :-");
    scanf("%d",&er);
    int ec;
    printf("Enter column number to end:-");
    scanf("%d",&ec);
 int sum = sumOfRectangle(a, sr, sc, er, ec);
    printf("sum of the given matrix is %d",sum);
        return 0;
 }