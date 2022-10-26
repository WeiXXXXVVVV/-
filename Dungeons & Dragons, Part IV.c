#include <stdio.h>

int main () {
    
    unsigned int temp = 0,t1,t2;
     int a1,a2,a3,a4;
     int b1,b2,b3,b4;
    int d1,d2,d3,d4;
    unsigned int c1,c2,c3,c4,c5;
    unsigned int N;
    scanf("%d",&N);
    scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
    a1 = N >>24;
    a2 = (N -(a1 <<24))>>16;
    a3 = (N -(a1 <<24)-(a2<<16))>>8;
    a4 = (N<<24)>>24;
    c5 = d1 +d2 +d3 +d4;
    if(d1==1){
        b1=a1;
    }
    else if(d1==2){
        b1=a2;
    }
    else if(d1==3){
        b1=a3;
    }
    else if(d1==4){
        b1=a4;
    }
    if(d2==1){
        b2=a1;
    }
    else if(d2==2){
        b2=a2;
    }
    else if(d2==3){
        b2=a3;
    }
    else if(d2==4){
        b2=a4;
    }
    if(d3==1){
        b3=a1;
    }
    else if(d3==2){
        b3=a2;
    }
    else if(d3==3){
        b3=a3;
    }
    else if(d3==4){
        b3=a4;
    }
    if(d4==1){
        b4=a1;
    }
    else if(d4==2){
        b4=a2;
    }
    else if(d4==3){
        b4=a3;
    }
    else if(d4==4){
        b4=a4;
    }
     c1 = b1 ^b2;
    temp = c1 <<24;
     c2 = b2 & b3;
    temp = temp + (c2<<16);
     c3 = b3 | b1;
    temp = temp + (c3<<8);
     c4 = ~b4;
     c4 = c4<<24;
     c4 = c4>>24;
    temp = temp +c4;
    t1 = temp >>c5;
    t2 = temp <<(32-c5);
    temp = t1 +t2;
    c1 = temp >>16;
    c2 = temp <<16;
    c2 = c2 >>16;
    c3 = c1^c2;
    printf("%d ",c3);


    return 0;
   
    
}
