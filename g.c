#include<stdio.h>
#define A 4.0 
#define B 3.0
#define C 2.0 
#define F 0 
int main () {
    char ch;
    int a=0,b=0;
    float c=0,d=0,f=0;
    while ((ch = getchar())!='\n'){
        if(ch>='0' && ch<='9'){
            if(ch == '0'){                
               b = 0;
               a= a+b;
            }
            else if(ch == '1'){                
               b = 1;
               a= a+b;
            }
            else if(ch == '2'){                
               b = 2;
                a= a+b;
            }
            else if(ch == '3'){                
               b = 3;
                a= a+b;
            }
            else if(ch == '4'){                
               b = 4;
                a= a+b;
            }
            else if(ch == '5'){                
               b = 5;
                a= a+b;
            }
            else if(ch == '6'){                
               b = 6;
                a= a+b;
            }
            else if(ch == '7'){                
               b = 7;
                a= a+b;
            }
            else if(ch == '8'){                
               b = 8;
                a= a+b;
            }
            else if(ch == '9'){                
               b = 9;
                a= a+b;
            }
            //printf("%d %d ",a,b);
        }
        else if(ch>='A' && ch<='F'){
            if(ch == 'A'){                
               d = b * 4;
               f= f+d;
              // printf("d%f ",d);
            }
             else if(ch == 'B'){                
               d = b * 3;
               f= f+d;
              // printf("d%f ",d);
            }
             else if(ch == 'C'){                
               d = b * 2;
               f= f+d;
               //printf("d%f ",d);
            }
             else if(ch == 'F'){                
               d = 0;
               f= f+d;
               //printf("d%f ",d);
            }
            
        }
        else if(ch=='+'){
            d = 0.3 *b;
            f= f+d;
        }
        else if(ch=='-'){
            d  = (-0.3)*b;
            f= f+d;
        }
       // printf("f%f ",f);                         
    }
    c= f / a; 
    //printf("%d\n",a);
    printf("%.2f",c);
    return 0;
}
