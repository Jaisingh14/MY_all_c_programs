#include<stdio.h>
typedef int* ponter;
int main(){
    int x = 5,y=7;
   ponter a= &x,b= &y;//int*xand int y
    printf("%p\n",a);
    printf("%p\n",b);

    return 0;
}