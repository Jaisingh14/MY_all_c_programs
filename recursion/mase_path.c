#include<stdio.h>
int maze(int cr , int cc, int er , int ec){
     int rightWay = 0;
     int downWay = 0;
     if(cr==er && cc==ec) return 1;      
     if(cr == er){
        rightWay += maze(cr,cc+1,er,ec);
     }
    if(cc == ec){
        downWay += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWay += maze(cr+1,cc,er,ec);
        downWay += maze(cr,cc+1,er,ec);
    }
    int totalWay = rightWay + downWay ;
    return totalWay;
}
int main(){
    int a; 
    printf("Enter number of rows of maze  :");
    scanf("%d",&a);
    int b; 
    printf("Enter number of column of maze:");
    scanf("%d",&b);

    int noofwaye= maze(1,1,a,b);
    printf("%d ",noofwaye);
    return 0;
}