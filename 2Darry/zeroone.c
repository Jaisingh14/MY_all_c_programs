 #include<stdio.h>
 int main(){
    // int 3,4;
    // printf("Enter number of row");
    // scanf("%d",&r);
    // printf("Enter number of column");
    // scanf("%d",&c);
    int a[3][4]={(1,0,0,1),(0,1,0,1),(1,1,1,1)};
    printf("Enter elements of 1st matrix (2x2):\n");
int maxCount = 0;
int maxIdx = -1;
    for(int i =0; i<3;i++){
        int count =0;
        for(int j=0;j<4;j++){
          if(a[i][j]==1)  count++;
        }
            if(maxCount<count){
            maxCount=count;
            maxIdx =i;
        }

    }
    printf("maximun number of 1 is%d",maxIdx);
        return 0;
 }