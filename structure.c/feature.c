#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        char tier;
        int speed;
  
        char name[15];
    } pokemon;
    pokemon a,b,c;
    a.attack = 150;
    a.hp =100;
    a.speed =60;
    a.tier ='A';
    strcpy(a.name,"blastoise");

    // b.attack = a.attack;
    // b.hp =b.hp;
    // b.speed =a.speed;
    // b.tier =a.tier;
    // strcpy(b.name,a.name);
    b =a ;
    printf("%d",b.attack);
        return 0;
}