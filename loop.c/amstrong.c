#include<stdio.h>
int main(){
    int i= 1,num,rem,sum;
while (i<=500)
{num =i;
sum =0;
while (num !=0)
{
   rem = num %10;
   sum  += rem *rem*rem ;
   num/=10;
}
if (sum == i)
{
    printf("%d is an armstrong number \n",i);
}
i++;
    
}
   
    
    return 0;
}