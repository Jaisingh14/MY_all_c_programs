#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]= {1,2,5,75,34,64,46};
    int max =INT_MIN;
    for(int i = 1;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;

}