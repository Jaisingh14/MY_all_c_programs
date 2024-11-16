#include<stdio.h>
void decimaltobinary(int n){
    int binarynum[32];
    int i=0;
    while(n>0){
        binarynum[i] =n%2;
        n=n/2;
        i++;
    }
    printf("BINARY number");
    for(int j=i-1;j>=0; j--){
        printf("%d",binarynum[j]);

    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter decimal number");
    scanf("%d",&n);
    decimaltobinary(n);
    return 0;
}