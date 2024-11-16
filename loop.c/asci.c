#include<stdio.h>
int main (){
    // int x = 65;
    // printf("%d\n,x");
    // char ch =(char)x;
    // printf("%c\n",ch);
     int n;
    printf("enter number ");
    scanf("%d",&n);
    int a = 65 + n;
    for(int i = 65; i<=a;i++){
        // printf("%d",i);
        char ch = (char)i;
        printf("%c\n",ch);
    }


    return 0;
}