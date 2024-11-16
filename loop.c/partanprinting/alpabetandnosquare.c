#include<stdio.h>
int main(){
    int n ,d;
    printf("enter no. of rows:");
    scanf("%d",&n);
for(int i = 1; i <= n; i++){
  int a =1;
  for (int j = 1; j <=i; j++)
  {
    if(i%2==0){
      d= j +64;
        printf("%c", (char)d);
    }
    else{
  printf("%d", j);  }
  }
  printf("\n");
}
return 0 ;}