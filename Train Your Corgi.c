#include<stdio.h>


#define INIT_STRENGTH 50
#define INIT_OBEDIENCE 20

#define STRENGTH_EAT 5
#define OBEDIENCE_EAT 2

#define STRENGTH_TRAIN 4
#define OBEDIENCE_TRAIN 5

#define LEARN_STRENGTH 55
#define LEARN_OBEDIENCE 28

int main () {
    int a=0;
    int Strength=50;
    int Obedience=20;
    char  ch;
    while((ch = getchar())!= '\n'){
        if(ch == 'e'){
            Strength  = Strength  + STRENGTH_EAT;
            Obedience = Obedience -OBEDIENCE_EAT;
        }
        else if(ch == 't'){
            Strength  = Strength  - STRENGTH_TRAIN;
            Obedience = Obedience +OBEDIENCE_TRAIN;
        
        }
        if (Obedience>=LEARN_OBEDIENCE  && Strength<=LEARN_STRENGTH){
            a=a+1;
            Obedience = INIT_OBEDIENCE;
        }
        //printf("%d. ",a);
        //printf("%d %d \n",Strength,Obedience);
    }
    if (a>=5){
        printf("Yes");
    }
    else{
        printf("No");
    }
        
    return 0;
}
