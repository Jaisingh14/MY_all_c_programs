#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{  // user defined data type 
        int hp;
        int speed;
        int attack;
        char tier;
    };
    
    struct pokemon pikachu;
    pikachu.attack =60;
    pikachu.hp =50;
    pikachu.speed=100;
    pikachu.tier='A';

printf("%d",pikachu.attack);
    struct pokemon charizard;
    charizard.attack=120;
    charizard.hp =80;
    charizard.speed = 60;
    charizard.tier='S';

     struct pokemon mewtow;
    mewtow.attack=180;
    mewtow.hp =90;
    mewtow.speed = 70;
    mewtow.tier='G';

    printf("%d",charizard.speed);
    return 0;
}