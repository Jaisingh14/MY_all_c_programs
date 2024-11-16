#include <stdio.h>

int main() {
     int i, j;
        
    int m;
    printf("Enter number of rows of 1st  matrix");
    scanf("%d",&m);
     int a[m][m];
         // Input elements for the first matrix
                int minr = 0;
     int maxr =m-1;
     int minc =0;
     int maxc= m-1;
     int tne = m*m;
     int count = 0;
     while(count<tne){
        // print the min row
        for(int j=minc; j<=maxc && count<tne;j++){
              printf("Enter element a%d%d: ", minr, j + 1);
            scanf("%d ",&a[minr][j]);
        count++;
        }
        minr++;
       
        // print maximum column
        for(int i=minr; i<=maxr && count<tne;i++){
              printf("Enter element a%d%d: ", i , maxc);
            scanf("%d ",&a[i][maxc]);
            count++;
        }
        maxc--;
        // print max row
        for(int j = maxc;j>=minc && count<tne;j--){
              printf("Enter element a%d%d: ", maxr, j);
            scanf("%d ",&a[maxr][j]);
            count++;
        }
        maxr--;
        //  print the min colum
        for(int i= maxr;i>=minr && count<tne;i--){
              printf("Enter element a%d%d: ", i , minc);
            scanf("%d ",&a[i][minc]);
            count++;
        }
        minc++;
     }

        //first matrix print
    printf("the first matrix is\n ");
         for (int i = 0; i < m; ++i){
        for (int j = 0; j < m; ++j) {
            printf("%d ",a[i][j] );
          
        }printf("\n");
        }
        //sprial print 
        return 0;
}