#include<stdio.h>
int main (){
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

    return 0;
}