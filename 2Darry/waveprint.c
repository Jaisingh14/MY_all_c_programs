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

//rotate
for(int i=0;i<n;i++){
    int j =0;
    int k = n-1;
    while(j<k){
        //swap arr[i][j]and arr[i][k]
        int temp =a[i][j];
        a[i][j]= a[i][k];
        a[i][k]= temp;
        j++;
        k--;
    }
    
}
        //output
        
        //  for (int i = 0; i < m; ++i){
        //     if(i%2==0){
        // for (int j = 0; j < n; ++j) {
        //     printf("%d ",a[i][j] );   
        // }
        // }
        // else{
        //       for (int j = n-1; j >=0; j--) {
        //     printf("%d ",a[i][j] );   
        // }
        // }
        // printf("\n");
        // }
return 0;
}