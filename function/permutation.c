#include<stdio.h>
int factorial(int x){
    int fact=1;
    for (int i = 2; i <=x; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int permutation(int n, int r){
    return factorial(n)/factorial(n-r);
}

int main(){
    int n;
    printf("Emter number n :");
    scanf("%d",&n);
    int r;
    printf("Enter number r : ");
    scanf("%d",&r);
    int ncr = permutation(n,r);
    printf("%d",ncr);
    return 0;
}