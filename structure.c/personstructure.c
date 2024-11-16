#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int salary;
        int age;
    } jai, raghav;
    jai.age = 29;
  strcpy(jai.name,"jai singh");
  jai.salary=1,00,000;

  raghav.age = 30;
  strcpy(raghav.name,"RAGHAV khare");
  raghav.salary= 1,00,000;
  printf("%s",jai.name);
  printf("%d",raghav.age); 

    return 0;
}
                                  