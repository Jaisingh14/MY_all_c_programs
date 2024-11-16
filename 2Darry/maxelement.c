#include<stdio.h>
#include<limits.h>
int main(){
    int r;
    printf("Enter number of row:-");
    scanf("%d",&r);
        int c;
    printf("Enter number of coloumn:-");
    scanf("%d",&c);

    int arr[r] [c];//for 1 2
    for(int i = 0 ; i<r;i++){
        for(int j = 0;j<c;j++){
            printf("enter number ");
            scanf("%d",&arr[i][j]);
        }
    }
 // 3 4
    for(int i = 0 ; i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int max =INT_MIN;
    int maxrow = 0;
    int maxcolumn =0;
    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
            max = arr[i][j];
             maxrow = i+1;
                maxcolumn = j+1;
        }
        }

    }
    printf("The maximum value is %d at index (%d, %d)\n", max, maxrow, maxcolumn);
    return 0;

}