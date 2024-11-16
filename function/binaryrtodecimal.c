#include<stdio.h>
int binarytodecimal(int binary){
    int decimalnum= 0,i =0, reminder;


    while(binary!=0){
        reminder  = binary%10;
        binary /=10;
        decimalnum +=reminder+pow(2,i);
        i++;
    }
    return decimalnum;
}
int main(){
    int binary;
    printf("enter the binary number");
    scanf("%d",&binary);
    printf("Decimal representation %d",binarytodecimal(binary));
    return 0;
}