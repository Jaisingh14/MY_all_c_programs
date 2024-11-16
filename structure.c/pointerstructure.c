#include<stdio.h>
#include<string.h>
#include<stdbool.h>
        typedef struct pokemon{
        int hp;
        int attack;
        char tier;
        int speed;
  
        char name[15];
                                } pokemon;
 void change(pokemon* p) {
    (*p).hp = 70;
    (*p).attack = 70;
    (*p).speed = 70;
    (*p).tier = 'S';
    strcpy((*p).name,"pikachu");
    return; }
 
int main(){
  
     pokemon pikachu;
     pikachu.hp =60;
     pikachu.attack =70;
     pikachu.speed=100;
     pikachu.tier ='A';
     strcpy(pikachu.name,"pikachu");
    pokemon* x=&pikachu;
    printfp("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    // pikachu.hp = 70
change(&pikachu);
    printfp("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);

   return 0;} 