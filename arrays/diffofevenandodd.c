#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int oddsum=0;
    int evensum=0;
    for(int i=0;i<=6;i++){
        if(arr[i]%2==0) {evensum+=arr[i];
        printf("%d \n ",evensum); }

        else {oddsum+=arr[i];
        printf("%d \n",oddsum);
        }
    }
    int a = oddsum - evensum;
    printf("%d",a);
    return 0;
}