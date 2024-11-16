#include<stdio.h>
void reverse(int arr[],int si,int et ){
    for(int i=si,j=et;i<j;i++,j--){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
     
    }
    return ;
}
int main(){
    
    int n;
    printf("Enter size of arry");
    scanf("%d",&n);
        int arr[n];
   for(int i = 0; i <=n-1; i++){
   printf("Enter element number %d:-",i+1);
   scanf("%d",&arr[i]);
   }
  int k;
   printf("Enter number of time arry rotate");
    scanf("%d",&k);
// int arr[7]={1,2,3,4,5,6,7};
// int n =7;
// int k = 3;
  k=k%n;
   reverse(arr,0,n-1);
  reverse(arr,0,k-1);
   reverse(arr,k,n-1);  
  for(int i =0;i<=n-1;i++){
 printf("%d",arr[i]);
  }
//  printf("Rotated array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    return 0;

}