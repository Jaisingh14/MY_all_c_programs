#include<stdio.h>
int main(){
    int marks[10];
    for(int i = 0;i <= 10; i++ ){
        printf("Enter marks");
        scanf("%d",&marks[i]);

    }
    for (int i = 0; i <= 10; i++)
    {
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    
    return 0;
}