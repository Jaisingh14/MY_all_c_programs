#include<stdio.h>
#include<string.h>
#include<stdbool.h>
        typedef struct student{
        int rollno;
        char name[20];
        char dept[20];
        int yearofjoining;
          char course[30];
    } student;
 
void check(student a,student b){
    if(a.course == b.course){printf("they are same");}
    else printf("they are not same");
    return;
}
int main(){
  
     student s1, s2;
     s1.rollno =60;
     strcpy(s1.name,"jai singh");
    strcpy(s1.dept,"computer science");
    strcpy(s1.course," b.tech");
        s1.yearofjoining = 2023;
        s2.rollno=30;
        s2.yearofjoining = 2024;
    strcpy(s2.dept,"mechanical");
    strcpy(s2.name,"munfed");
    strcpy(s2.course,"b.tech");
       check(s1,s2);
  return 0;} 