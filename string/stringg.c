#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    int i =0;
  //  scanf("%s",str);
 scanf("%[^\n]s",str);
     printf("your input is %s",str);
    return 0;
}