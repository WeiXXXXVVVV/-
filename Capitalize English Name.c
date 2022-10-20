#include<stdio.h>
#include <ctype.h>

int main () {
    int a,b=0,c=-1;
    char ch;
    scanf("%d",&a);
    while( b<a ){
        ch = getchar();
        if(c==0){
            if (ch>='a'&&ch<='z'){           
                ch=ch-32;
                putchar(ch);
            }
            else {
                putchar(ch);
            }
        }
        else if (c!=0 ){
            if (ch>='A'&&ch<='Z'){           
                ch=ch+32;
                putchar(ch);
            }
            else if (ch>='a'&&ch<='z'){                          
                putchar(ch);
            }
            else if(ch==' '){
                c = -1;
                printf(" ");
            }
            else if(ch==','|| ch=='.' ||ch==';'){
                c = -1;
                b = b+1;
                printf("\n");
            }                        
        }
        c= c + 1;
    }
    return 0;
} 
