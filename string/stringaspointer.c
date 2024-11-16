#include<stdio.h>
#include<string.h>
int main(){
    char str[] ="jai singh";
    char* ptr = str;//print now point to str[0]
int i =0;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
    i++;
}
    return 0;
}