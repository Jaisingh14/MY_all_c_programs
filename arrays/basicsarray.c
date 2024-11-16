#include<stdio.h>
int main(){

    int arr[5] ; 
for(int i =0; i <= 4; i++){
    printf("Enter element number %d",i+1);
   scanf("%d",&arr[i]);

}  
for (int i = 0; i <= 5; i++)
{printf("%d\n",arr[i]);  
}

// float a[3]= { 1.2,3.4,5.7};
    // printf("%f",a[2]);
    return 0;
}