#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
  
        typedef struct pokemon{
        int hp;
        int attack;
        char tier;
        int speed;
  
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;  
        char ability[10];
    } legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp  = 150;
    mewtwo.normal.attack =100;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.tier = 'S';

 return 0;} 