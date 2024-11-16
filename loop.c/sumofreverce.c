#include<stdio.h>
int main (){
  int n;
  printf("enter number");
  scanf("%d",&n);
  int r =0;
  while (n>0){
    r= r*10;
    r = r + (n%10);
    n = n/10;

  } 
  printf("the reverse number is %d",r); 
  int sum =0;
  int ld = 0;
  while (r!=0)
  {
    ld=r%10;
    sum = sum+ld;
    r=r/10;
  }
  printf("\n The sum is %d",sum);
  
    return 0;
}