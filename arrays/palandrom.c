#include<stdio.h>
// void reverse(int arr[]){
//     int i=0;
//     int j=6;
//     for(int i=0,j=6;i<j;i++,j--){
//         int temp =arr[i];
//         arr[i]=arr[j];
//         arr[j]= temp;
     
//     }
//}
int main(){
 int arr[7]= {1,2,3,4,3,2,1};
   int yes =1;
  for(int i=0,j=6;i<j;i++,j--){
 if(arr[i]==arr[j]){
    yes++;
 }
 else { yes =0;
 break;}
  }
     if(yes!=0){
        printf("arry is palimadrom");
     }
     else {printf("arry is not palimadrom");
     }
    return 0;

}