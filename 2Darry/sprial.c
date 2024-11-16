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
        //sprial print 
        int minr = 0;
     int maxr =m-1;
     int minc =0;
     int maxc= n-1;
     int tne = m*n;
     int count = 0;
     while(count<tne){
        // print the min row
        for(int j=minc; j<=maxc && count<tne;j++){
            printf("%d ",a[minr][j]);
        count++;
        }
        minr++;
       
        // print maximum column
        for(int i=minr; i<=maxr && count<tne;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        // print max row
        for(int j = maxc;j>=minc && count<tne;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        //  print the min colum
        for(int i= maxr;i>=minr && count<tne;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
     }
        return 0;
}