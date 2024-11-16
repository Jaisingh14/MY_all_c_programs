#include<stdio.h>
int main(){
    int a  = 35;
       int* x = &a;
       int** y = &x;
       int*** z = &y;
      // *x = 7; //a is changed
    printf("%d\n",a); // %p se address print hota hai
  //  printf("%p"&x);
  printf("%d\n",&x);
  printf("%d\n",&y);
    return 0;
}