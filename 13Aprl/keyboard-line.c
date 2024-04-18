#include <stdio.h>

int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    
    if(x =='q'|| x =='w' || x =='e'|| x =='r'|| x =='t' || x =='y'|| x =='u'|| x =='i'|| x =='o'|| x =='p'){
        printf("UPPER LINE");
    }
    else if( x =='a'|| x =='s' || x =='d'|| x =='f'|| x =='g' || x =='h'|| x =='j'|| x =='k'|| x =='l'){
        printf("MID LINE");
    }
    else if( x =='z'|| x =='x' || x =='c'|| x =='v'|| x =='b' || x =='n'|| x =='m'|| x =='k'|| x =='l'){
        printf("LOW LINE");
    }
   
    else {
        printf("INPUT MISMATCH!!!");
    }
    return 0;
