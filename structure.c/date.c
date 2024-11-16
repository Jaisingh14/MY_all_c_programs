#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int months;
        int years;
    }date;
    date a,b;
    a.day =14;
    a.months = 10;
    a.years = 2009;


    b.day =14;
    b.months = 9;
    b.years =2007;
    bool flag = true;
    if(a.day==b.day) flag = false;
       if(a.months==b.months) flag = false; 
         if(a.years==b.years) flag = false;


         if(flag == true) printf("the date are same");
         else printf("date are notr same");
        return 0;
}