#include<stdio.h>
#include<string.h>
int main(){
    char s1[12] = "jai singh";
    char s2[12];
    strcpy(s2,s1);
    s2[0] ='m';
printf("%s",s2);
   return 0;
}