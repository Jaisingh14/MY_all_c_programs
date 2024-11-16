#include <stdio.h>

int main() {
     int i, j;
        
    int m;
    printf("Enter number of rows of 1st  matrix");
    scanf("%d",&m);
        int n;
    printf("Enter number of coloumn  1st    matrix");
    scanf("%d",&n);
     int a[m][n];
         // Input elements for the first matrix
    printf("Enter elements of 1st matrix (%dx%d):\n",m,n);
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        
        //first matrix print
    printf("the first matrix is\n ");
         for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j) {
            printf("%d ",a[i][j] );
          
        }printf("\n");
        }

  int p;
    printf("Enter nuqber of coloumn of 2nd  qatrix");
    scanf("%d",&p);

    int q;
    printf("Enter nuqber of coloumn of 2nd  qatrix");
    scanf("%d",&q);
    int b[p][q];

    // Input elements for the second matrix
    printf("Enter elements of 2nd matrix (%dx%d):\n",n,q);
    for (i = 0; i < p; ++i)
        for (j = 0; j < q; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
     //second matrix print
     printf("second matrix is\n");
         for (int i = 0; i < p; ++i){
        for (int j = 0; j < q; ++j) {
            printf("%d ",b[i][j] );
          
        }printf("\n");
        }
//check
if(n!=p){
    printf("the matrix can't be multiply");
}
else{// multiplication
    int res[m][q];
    int cr=n;
    for(int i = 0;i<m;i++){
        for(int j =0; j<q;j++){
            //i row of a[][]and j column of b[][]
            //a[i][0],a[i][1],a[i][2].......)*(b[0][j],b[i][j]b[2][j]....)
           res[i][j] =0;
            for(int k =0; k<cr;k++){
                res[i][j] +=a[i][k]*b[k][j];
            }
        }
}
    // Printing the result
    printf("\nmultiplication of the two matrices:\n");
        for(int i = 0;i<m;i++){
        for(int j =0; j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
        }
}
    return 0;
}
