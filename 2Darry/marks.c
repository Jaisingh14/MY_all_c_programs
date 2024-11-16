#include<stdio.h>
int main (){
    int r;
    printf("Enter number of student :-");
    scanf("%d",&r);
      int arr[r][2];  
        
    for(int i = 0 ; i<r;i++){
        for(int j = 0;j<1;j++){
            printf("enter roll number ");
            scanf("%d :-",&arr[i][j]);
        }
    }   
        for(int i = 0 ; i<r;i++){
        for(int j = 1;j<2;j++){
            printf("enter marks ");
            scanf("%d",&arr[i][j]);
        }
    }   

    for(int i = 0 ; i<r;i++){
        for(int j = 0;j<2;j++){
          
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}