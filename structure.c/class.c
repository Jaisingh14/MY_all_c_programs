#include<stdio.h>
#include<string.h>
int main(){
typedef struct student{
    int science;
    int sst;
    int maths;
    char grade[1];
    char name[50];
} student;
student arr[3];

for(int i = 0; i<3;i++){
     printf("name of student\n",arr[i].name);
        scanf("%s",&arr[i].name);
    printf("marks in maths%d\n",arr[i].maths);
         scanf("%d",&arr[i].maths);
     printf("marks in science%d\n",arr[i].science);
          scanf("%d",&arr[i].science);
      printf("marks in sst%d\n",arr[i].sst);
          scanf("%d",&arr[i].sst);
        printf("grade%c\n",arr[i].grade);
         scanf("%c",&arr[i].grade);
    }

// arr[0].maths = 50;
// arr[0].science = 100;
// arr[0].sst = 30;
// arr[0].grade ='A';
// strcpy(arr[0].name,"pikachu");

// arr[1].maths = 150;
// arr[1].science = 100;
// arr[1].sst =130;
// arr[1].grade ='S';
// strcpy(arr[1].name,"chariazard");

// arr[2].maths = 50;
// arr[2].science = 140;
// arr[2].sst =40;
// arr[2].grade = 'B';
// strcpy(arr[2].name,"mewtwo");

for(int i = 0; i<3;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].maths);
    printf("%d\n",arr[i].science);
    printf("%d\n",arr[i].sst);
    printf("%c\n",arr[i].grade);
       
}
    return 0;
}