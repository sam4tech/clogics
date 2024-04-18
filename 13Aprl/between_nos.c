#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num >= 1 && num <= 10){
        printf("Between 1 to 10");
    }
    else if(num >=11 && num <= 20){
        printf("Between 11 to 20");
    }
    else if(num >=50 && num <= 100){
        printf("Between 50 to 100");
    }
    else{
        printf("not maatch");
    }
    return 0;
}