#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[5];
        int noofpage;
        float price;
    } pw;

    pw a;
   pw b;
    pw c;
    
    a.noofpage=100000;
    a.price = 411.5;
   strcpy(a.name,"secret seven");
  
    b.noofpage=200;
    b.price = 190.5;
   strcpy(b.name,"famous five");

    printf("%d\n",a.noofpage);
      printf("%f\n",a.price); 
      printf("%s\n",a.name);
 printf("%d\n",a.noofpage);
    return 0;
}