#include<stdio.h>
#include<string.h>
int main(){
typedef struct criketer{
    int age;
    int noOFmatch;
    float average;
    char name[50];
} criketer;
criketer arr[3];

for(int i = 0; i<3;i++){
     printf("name of criketer\n",arr[i].name);
        scanf("%[^\n]s",&arr[i].name);
    printf("marks in average%d\n",arr[i].average);
         scanf("%f",&arr[i].average);
     printf("marks in age%d\n",arr[i].age);
          scanf("%d",&arr[i].age);
      printf("marks in noOFmatch%d\n",arr[i].noOFmatch);
          scanf("%d",&arr[i].noOFmatch);
    }

for(int i = 0; i<3;i++){
    printf("%s",arr[i].name);
    printf("%f\n",arr[i].average);
    printf("%d\n",arr[i].age);
    printf("%d\n",arr[i].noOFmatch);
       
}
    return 0;
}